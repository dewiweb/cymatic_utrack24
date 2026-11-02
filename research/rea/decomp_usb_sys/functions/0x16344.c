// rea decompile_all
// name: FUN_00016344
// address: 0x16344
// body: available
// range: 0x16344-0x1641a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00016344(undefined8 param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int local_res20;
  
  lVar1 = DAT_00029268;
  piVar4 = &DAT_000275b0;
  iVar2 = 32000;
  do {
    if (iVar2 == *param_3) goto LAB_0001637c;
    piVar4 = piVar4 + 5;
    iVar2 = *piVar4;
  } while (iVar2 != 0);
  piVar4 = (int *)0x0;
LAB_0001637c:
  if (piVar4 == (int *)0x0) {
    local_res20 = -0x1fffffcc;
  }
  else {
    if (*(int *)(DAT_00029268 + 0x6fc) == *piVar4) {
      *(undefined4 *)(param_2 + 0x30) = 0;
      local_res20 = 0;
      goto LAB_000163f9;
    }
    if (*(int *)(DAT_00029268 + 0x764) == 0) {
      uVar3 = FUN_00014794(DAT_00029268);
      if ((piVar4[4] & uVar3) == 0) {
        local_res20 = -0x1fffffef;
      }
      else {
        *(int *)(lVar1 + 0x734) = *piVar4;
        FUN_000144d4(lVar1);
        if (*(char *)(lVar1 + 0x7c0) != '\0') {
          FUN_00014e7c(lVar1,0);
          local_res20 = FUN_00014cc0(lVar1,0,(ulonglong)param_3);
        }
      }
      *(int *)(param_2 + 0x30) = local_res20;
      goto LAB_000163f9;
    }
    local_res20 = -0x1fffffb9;
  }
  *(int *)(param_2 + 0x30) = local_res20;
LAB_000163f9:
  *(undefined8 *)(param_2 + 0x38) = 0;
  IofCompleteRequest(param_2,0);
  return local_res20;
}

