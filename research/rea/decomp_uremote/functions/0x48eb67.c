// rea decompile_all
// name: FUN_0048eb67
// address: 0x48eb67
// body: available
// range: 0x48eb67-0x48edef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048eb67(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  int in_ECX;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *local_254;
  undefined1 uStack_24e;
  undefined4 uStack_250;
  void *local_24c;
  int iStack_248;
  int iStack_244;
  int iStack_240;
  int iStack_23c;
  int iStack_238;
  void *local_22c;
  undefined4 local_228;
  code *local_224;
  undefined1 *local_220;
  undefined1 *local_21c;
  undefined4 local_218;
  void *local_214;
  undefined1 *local_210;
  int local_20c;
  void **local_1f8;
  int local_1f4;
  uint local_1f0;
  int local_1ec;
  undefined4 local_1e8;
  undefined1 local_15e;
  undefined4 local_158;
  undefined1 local_14c;
  undefined2 local_148;
  undefined2 local_146;
  uint uStack_140;
  undefined1 local_a8 [140];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dc31f;
  local_14 = ExceptionList;
  local_1c = DAT_00955fd4 ^ (uint)&local_254;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffda0;
  ExceptionList = &local_14;
  _memset(&local_210,0,0x168);
  FUN_0047f83e();
  FUN_0048e73f();
  local_1f8 = &local_22c;
  local_218 = param_2;
  local_210 = local_a8;
  local_24c = _malloc(0x200);
  local_c = 0;
  local_228 = 0x200;
  local_224 = FUN_0041f3a2;
  local_220 = &LAB_0048e7af;
  local_21c = &LAB_0048e791;
  local_22c = local_24c;
  local_214 = local_24c;
  local_1f4 = FUN_0047e366(uVar1);
  local_1f0 = FUN_0047e371();
  local_148 = 0x48;
  local_1ec = 3;
  local_1e8 = 2;
  local_14c = 1;
  local_146 = local_148;
  FUN_00482c6f();
  local_158 = 2;
  local_15e = 1;
  if (*(float *)(in_ECX + 4) < 0.0) {
    *(undefined4 *)(in_ECX + 4) = 0x3f59999a;
  }
  local_254 = (undefined4 *)(*(float *)(in_ECX + 4) * 100.0);
  FUN_004a8e4a(local_254);
  FUN_00470645(0,100);
  FUN_00482b9d(&local_210);
  FUN_0047f9cd();
  local_254 = (undefined4 *)(**(code **)(local_20c + 8))(&local_210,1,local_1ec * local_1f4,1);
  FUN_0047e7d7(&iStack_248,0);
  local_c._0_1_ = 1;
  while (uStack_140 < local_1f0) {
    puVar4 = (undefined1 *)*local_254;
    if (iStack_244 == 1) {
      puVar2 = (undefined1 *)(iStack_240 * uStack_140 + iStack_248);
      iVar3 = iStack_238;
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        *puVar4 = puVar2[2];
        puVar4[1] = puVar2[1];
        puVar4[2] = *puVar2;
        puVar4 = puVar4 + 3;
        puVar2 = puVar2 + iStack_23c;
      }
    }
    else {
      iVar3 = 0;
      if (0 < iStack_238) {
        do {
          FUN_0047e827(iVar3,uStack_140);
          *puVar4 = uStack_24e;
          puVar4[1] = (char)((uint)uStack_250 >> 8);
          puVar4[2] = (char)uStack_250;
          puVar4 = puVar4 + 3;
          iVar3 = iVar3 + 1;
        } while (iVar3 < iStack_238);
      }
    }
    FUN_0047fa2a(local_254);
  }
  FUN_0047f8e5();
  thunk_FUN_00482a7e();
  local_c = (uint)local_c._1_3_ << 8;
  FUN_0047e819();
  local_c = 0xffffffff;
  _free(local_24c);
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)&local_254);
  return;
}

