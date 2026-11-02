// rea decompile_all
// name: FUN_004d5511
// address: 0x4d5511
// body: available
// range: 0x4d5511-0x4d568d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d5511(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  float10 fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined *local_88;
  uint uStack_84;
  undefined1 local_48 [16];
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dc070;
  local_14 = ExceptionList;
  uStack_84 = DAT_00955fd4 ^ (uint)&stack0xffffff80;
  ExceptionList = &local_14;
  local_88 = (undefined *)0x4d5546;
  FUN_0047888f();
  local_c = 0;
  local_88 = *(undefined **)(param_3 + 4);
  fVar1 = (float10)FUN_0044dd00(0x41700000,*(float *)(param_4 + 8) * 0.2,
                                *(float *)(param_4 + 0xc) * 0.2);
  fVar3 = (float)fVar1;
  uVar2 = 0x40a00000;
  FUN_004a4fa2(0x40a00000,fVar3);
  FUN_004a4e0d(local_48,0x3f000000);
  FUN_00479bf8(local_38,uVar2,fVar3);
  FUN_004c1e29(&local_88,0x1000af0);
  FUN_0047cda7();
  local_88 = &DAT_0095d798;
  FUN_0047d2ae();
  FUN_004c1e29(&local_88,0x1000af1);
  FUN_0047cda7();
  local_88 = &DAT_0095d798;
  FUN_0047badf();
  FUN_0047d2d0(local_38);
  local_88 = (undefined *)0x4d5679;
  FUN_004f7994();
  ExceptionList = local_14;
  return;
}

