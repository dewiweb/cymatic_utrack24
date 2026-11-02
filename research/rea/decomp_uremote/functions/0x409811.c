// rea decompile_all
// name: FUN_00409811
// address: 0x409811
// body: available
// range: 0x409811-0x4099ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00409811(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int local_c;
  int local_8;
  
  local_8 = 0;
  FUN_004082f9(0x1000,param_1,param_6);
  _memset(param_1,0,0xb0);
  param_1[0xc] = 0x10000;
  param_1[0xf] = 0x10000;
  *param_1 = 0xffff;
  param_1[1] = 0xffff;
  param_1[2] = 0xffff;
  param_1[3] = 0xffff;
  param_1[4] = 0xffff;
  param_1[5] = 0xffff;
  param_1[0x20] = 0xffff;
  param_1[0x21] = 0xffff;
  param_1[0x22] = 0xffff;
  param_1[0x2b] = 0xffff;
  param_1[8] = 0xff9c0000;
  param_1[9] = 0x320000;
  param_1[0xb] = 2;
  param_1[0x27] = 0x2210;
  iVar1 = FUN_00408ef1(param_3,&local_8,&local_c);
  if (iVar1 == 0) {
    iVar1 = FUN_004088d0(local_c + local_8);
  }
  FUN_00409027();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_1[0x21] != 0xffff) {
    return 0;
  }
  if ((param_1[0x1d] != 0) && (param_1[0x1e] != 0)) {
    _memset(param_1 + 0x2c,0,0x168);
    param_1[0x7f] = 0xffffffff;
    param_1[0x5e] = 7;
    param_1[0x5f] = 1;
    param_1[0x81] = 0xf5c;
    param_1[0x5d] = 0x27a000;
    FUN_004082f9(0x2000,param_1 + 0x2c,param_6);
    iVar1 = FUN_0041106d();
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_004111b5();
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_004088d0(*(undefined4 *)(param_4 + 0x24));
    FUN_00411249();
    if (iVar1 != 0) {
      return iVar1;
    }
    *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) & 0xfe;
  }
  iVar1 = 0;
  if (((param_1[0x83] != 0) && (iVar1 = FUN_0041106d(), iVar1 == 0)) &&
     (iVar1 = FUN_00408b33(1), iVar1 == 0)) {
    iVar1 = FUN_00408d97(param_1 + 0x8e,0);
  }
  return iVar1;
}

