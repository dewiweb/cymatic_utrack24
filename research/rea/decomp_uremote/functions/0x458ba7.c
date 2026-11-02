// rea decompile_all
// name: FUN_00458ba7
// address: 0x458ba7
// body: available
// range: 0x458ba7-0x458ca6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00458ba7(void)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int in_ECX;
  float local_8;
  
  FUN_00465317(in_ECX + 0x84);
  iVar1 = *(int *)(*(int *)(in_ECX + 0x18) + 0x7c);
  FUN_0045ef8e();
  cVar2 = FUN_0045f6db();
  if (cVar2 != '\0') {
    *(undefined4 *)(in_ECX + 0x48) = 0;
  }
  cVar2 = FUN_0045f724();
  if (cVar2 != '\0') {
    FUN_0044a500(&local_8,*(undefined4 *)(iVar1 + 0x284));
    FUN_00465317(in_ECX + 0x84);
    FUN_004652d6();
  }
  cVar2 = FUN_00465953();
  if (cVar2 != '\0') {
    FUN_00458feb();
    FUN_00465317(in_ECX + 0x80);
  }
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(iVar1 + 0x1ec);
  FUN_0045efa9();
  local_8 = *(float *)(in_ECX + 0x28) + *(float *)(in_ECX + 0x20);
  local_8 = (float)FUN_005b3fb0();
  uVar3 = FUN_005b3fb0();
  FUN_0043a9ae(in_ECX + 0x80,*(undefined4 *)(in_ECX + 0x78),uVar3);
  FUN_0049f5e8();
  FUN_004c4d7a();
  FUN_004c1613(in_ECX + -0x70);
  return;
}

