// rea decompile_all
// name: FUN_004259a4
// address: 0x4259a4
// body: available
// range: 0x4259a4-0x425a84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004259a4(int param_1,undefined4 param_2,undefined4 param_3,byte param_4,undefined4 param_5,
                undefined4 param_6,byte *param_7)

{
  int iVar1;
  undefined4 uVar2;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_8 = FUN_004253a9(param_1,param_3,param_2,&local_10,&local_14,&local_c);
  if ((local_8 == 0) &&
     ((iVar1 = (**(code **)(param_1 + 0x1fc))(param_1,0x45424454,param_5,0), iVar1 == 0 ||
      (local_8 = (**(code **)(param_1 + 0x1fc))(param_1,0x62646174,param_5,0), local_8 == 0)))) {
    uVar2 = FUN_004d021d();
    local_8 = FUN_0042571a(local_14,local_10,uVar2,local_c,*(undefined4 *)(param_1 + 0x54),0,0,
                           param_5,param_7,0);
    if (local_8 == 0) {
      if ((*(byte *)(local_14 + 0x2f) & 1) != 0) {
        iVar1 = (int)*(char *)(local_14 + 0x10) - (int)*(char *)(local_14 + 0x11);
        param_7[5] = -(param_7[1] >> 1);
        param_7[6] = (byte)((int)(iVar1 - (uint)*param_7) / 2);
        param_7[7] = (byte)((iVar1 * 0xc) / 10);
      }
      if ((param_4 & 0x40) != 0) {
        FUN_004254b4();
      }
    }
  }
  return local_8;
}

