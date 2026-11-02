// rea decompile_all
// name: FUN_00443684
// address: 0x443684
// body: available
// range: 0x443684-0x4437a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00443684(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  float10 fVar4;
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dd949;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_0047888f(DAT_00955fd4 ^ (uint)&stack0xffffffb0);
  local_c = 0;
  iVar2 = *(int *)(in_ECX + 0x1c) / 2;
  iVar3 = FUN_005b3fb0();
  FUN_00443385();
  fVar1 = (float)iVar2;
  local_c._0_1_ = 1;
  fVar4 = (float10)FUN_0049fa03();
  FUN_00479368(local_38,(float)iVar3,fVar1,*(float *)(in_ECX + 0x184) + (float)iVar3,fVar1,
               (float)((float10)0.5 * (float10)*(float *)(in_ECX + 0x184) + (float10)iVar3),
               (float)((float10)iVar2 + fVar4 * (float10)0.5));
  local_c = (uint)local_c._1_3_ << 8;
  FUN_004c4d7a();
  FUN_0047d2ae(local_38,&DAT_0095d798);
  FUN_004f7994();
  ExceptionList = local_14;
  return;
}

