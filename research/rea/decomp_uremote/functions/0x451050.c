// rea decompile_all
// name: FUN_00451050
// address: 0x451050
// body: available
// range: 0x451050-0x451249 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00451050(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  float *pfStack_48;
  float local_44;
  float local_2c;
  int iStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  local_44 = 6.342528e-39;
  iVar2 = FUN_0044bfc5();
  iVar2 = *(int *)(iVar2 + 8);
  pfStack_48 = &local_2c;
  *(float *)(in_ECX + 0x480) = (float)iVar2;
  local_44 = (float)iVar2 * 0.8;
  local_2c = local_44;
  FUN_0044bfc5();
  FUN_0049f81a();
  local_44 = 6.342627e-39;
  FUN_0049f5e8();
  local_44 = 6.34264e-39;
  FUN_004c4d7a();
  local_44 = 6.342647e-39;
  iVar2 = FUN_0044bfc5();
  iVar2 = *(int *)(iVar2 + 4);
  local_44 = 6.342658e-39;
  iVar3 = FUN_0044bfc5();
  local_2c = *(float *)(iVar3 + 0xc);
  iStack_28 = iVar2 << 2;
  pfStack_48 = (float *)(float)*(int *)(*(int *)(in_ECX + 0x74) + 0x3220);
  puStack_24 = (undefined1 *)&pfStack_48;
  local_44 = (float)*(int *)(*(int *)(in_ECX + 0x74) + 0x3224);
  FUN_004c0902(*(undefined4 *)(in_ECX + 0x74));
  local_44 = 6.342819e-39;
  iVar3 = FUN_005b3fb0();
  iVar2 = iVar2 * 2;
  if (iVar3 < iVar2) {
    iVar3 = iVar2;
  }
  iStack_18 = (*(int *)(in_ECX + 0x18) - iStack_28) - (int)local_2c;
  iStack_10 = iStack_28;
  local_44 = 6.342892e-39;
  iStack_14 = iVar3;
  iStack_c = FUN_005b3fb0();
  local_44 = 6.342912e-39;
  FUN_00478990();
  local_44 = 6.342919e-39;
  iVar2 = FUN_0044bfc5();
  local_44 = (float)*(int *)(iVar2 + 0x14);
  pfStack_48 = (float *)(in_ECX + 0x78);
  FUN_004432f2();
  local_44 = 6.342976e-39;
  iVar2 = FUN_005b3fb0();
  iStack_28 = iStack_c + iVar3;
  fVar1 = (float)iStack_28;
  local_44 = 6.343028e-39;
  puStack_24 = (undefined1 *)iVar2;
  iStack_28 = FUN_005b3fb0();
  pfStack_48 = (float *)(float)(iStack_28 + iVar2);
  iStack_28 = iVar2 - iStack_28;
  local_44 = fVar1;
  FUN_00479368(in_ECX + 0x78,(float)(int)puStack_24,uStack_1c,(float)iStack_28,fVar1);
  local_44 = 6.343153e-39;
  FUN_0045151e();
  local_44 = 6.343174e-39;
  FUN_004c0c1f();
  local_44 = 0.0;
  pfStack_48 = (float *)0x45123c;
  FUN_00440efe();
  pfStack_48 = (float *)0x451243;
  FUN_00440e9b();
  return;
}

