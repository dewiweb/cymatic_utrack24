// rea decompile_all
// name: FUN_00016424
// address: 0x16424
// body: available
// range: 0x16424-0x16529 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00016424(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  ulonglong uVar6;
  
  lVar1 = DAT_00029268;
  if (*(int *)(DAT_00029268 + 0x764) == 0) {
    piVar5 = &DAT_000275b0;
    iVar3 = 32000;
    do {
      if (iVar3 == *(int *)(param_3 + 4)) goto LAB_00016473;
      piVar5 = piVar5 + 5;
      iVar3 = *piVar5;
    } while (iVar3 != 0);
    piVar5 = (int *)0x0;
LAB_00016473:
    if (piVar5 != (int *)0x0) {
      uVar6 = param_3;
      uVar2 = FUN_00014794(DAT_00029268);
      if ((piVar5[4] & uVar2) == 0) {
        uVar4 = 0xe0000011;
      }
      else {
        *(undefined4 *)(lVar1 + 0x734) = *(undefined4 *)(param_3 + 4);
        iVar3 = FUN_000144d4(lVar1);
        if (-1 < iVar3) {
          if (*(char *)(lVar1 + 0x7c0) != '\0') {
            FUN_00014e7c(lVar1,0);
            FUN_00014cc0(lVar1,0,uVar6);
          }
          *(undefined4 *)(param_2 + 0x30) = 0;
          *(undefined8 *)(param_2 + 0x38) = 0;
          IofCompleteRequest(param_2,0);
          FUN_00015e00(DAT_00029268,3,0,0,3);
          return 0;
        }
        uVar4 = 0xe0000060;
      }
      *(undefined4 *)(param_2 + 0x30) = uVar4;
      goto LAB_000164b3;
    }
    uVar4 = 0xe0000034;
  }
  else {
    uVar4 = 0xe0000047;
  }
  *(undefined4 *)(param_2 + 0x30) = uVar4;
LAB_000164b3:
  *(undefined8 *)(param_2 + 0x38) = 0;
  IofCompleteRequest(param_2,0);
  return uVar4;
}

