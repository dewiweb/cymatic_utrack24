// rea decompile_all
// name: FUN_00432889
// address: 0x432889
// body: available
// range: 0x432889-0x432981 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00432889(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar3 = *(int *)(param_2 + 0x60);
  if ((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 300))) {
    iVar2 = iVar3 * 0xfc + *(int *)(param_1 + 0x130);
    (**(code **)(param_2 + 0x34))(param_2,6,&local_1c,3);
    iVar3 = local_10;
    if (local_10 < 0) {
      iVar3 = -local_10;
    }
    FUN_0040d2d8();
    uVar1 = FUN_0040d2d8();
    *(undefined2 *)(param_1 + 0x44) = uVar1;
    if (iVar3 != 0x10000) {
      local_1c = FUN_0040d2d8();
      local_18 = FUN_0040d2d8();
      local_14 = FUN_0040d2d8();
      local_c = FUN_0040d2d8();
      local_8 = FUN_0040d2d8();
      local_10 = 0x10000;
    }
    *(undefined4 *)(iVar2 + 0xd8) = local_1c;
    *(undefined4 *)(iVar2 + 0xe0) = local_18;
    *(undefined4 *)(iVar2 + 0xdc) = local_14;
    *(int *)(iVar2 + 0xe4) = local_10;
    *(int *)(iVar2 + 0xe8) = local_c >> 0x10;
    *(int *)(iVar2 + 0xec) = local_8 >> 0x10;
  }
  return 0;
}

