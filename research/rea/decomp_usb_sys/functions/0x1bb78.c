// rea decompile_all
// name: FUN_0001bb78
// address: 0x1bb78
// body: available
// range: 0x1bb78-0x1bccb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001bb78(longlong param_1,undefined1 param_2,ulonglong *param_3)

{
  undefined1 uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  uint local_120 [2];
  undefined1 local_118 [2];
  undefined2 local_116 [127];
  ulonglong local_18;
  
  local_18 = DAT_00029100 ^ (ulonglong)auStack_148;
  if (*(short *)(param_1 + 0x19a4) == -1) {
    local_128 = 0x300000000;
    local_120[0] = 0x100;
    iVar2 = FUN_0001ba7c(param_1,(int *)&local_128,local_120,local_118);
    if ((iVar2 < 0) || (local_120[0] < 4)) {
      *(undefined2 *)(param_1 + 0x19a4) = 0;
    }
    else {
      *(undefined2 *)(param_1 + 0x19a4) = local_116[0];
    }
  }
  local_128 = CONCAT35(CONCAT21(*(undefined2 *)(param_1 + 0x19a4),param_2),0x300000000);
  local_120[0] = 0x100;
  iVar2 = FUN_0001ba7c(param_1,(int *)&local_128,local_120,local_118);
  if (-1 < iVar2) {
    FUN_000264d0(param_3,0,0x28);
    if (3 < local_120[0]) {
      uVar5 = (local_120[0] >> 1) - 1;
      uVar4 = 0x27;
      if (uVar5 < 0x27) {
        uVar4 = uVar5;
      }
      FUN_000264d0(param_3,0,0x28);
      puVar6 = local_116;
      if (uVar4 != 0) {
        uVar3 = (ulonglong)uVar4;
        do {
          uVar1 = *(undefined1 *)puVar6;
          puVar6 = puVar6 + 1;
          *(undefined1 *)param_3 = uVar1;
          param_3 = (ulonglong *)((longlong)param_3 + 1);
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
  }
  FUN_00026110(local_18 ^ (ulonglong)auStack_148);
  return;
}

