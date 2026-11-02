// rea decompile_all
// name: FUN_0044ff68
// address: 0x44ff68
// body: available
// range: 0x44ff68-0x450046 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044ff68(void)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  int extraout_ECX;
  undefined4 local_8;
  
  FUN_0043c289();
  iVar1 = *(int *)(*(int *)(in_ECX + 0xc) + 0x224);
  if (iVar1 == *(int *)(in_ECX + 0x60ec)) goto LAB_0044fffc;
  FUN_0045fd99(in_ECX + 0x3520);
  FUN_004509e7(1);
  thunk_FUN_00450a2e();
  if (iVar1 == 4) {
    if (*(int *)(in_ECX + 0x60e4) == 4) {
      FUN_0044fcbf();
      goto LAB_0044ffc4;
    }
LAB_0044ffc9:
    if ((*(int *)(in_ECX + 0x60ec) == 7) || (*(int *)(in_ECX + 0x60ec) == 8)) goto LAB_0044ffd9;
  }
  else {
LAB_0044ffc4:
    if (iVar1 != 6) goto LAB_0044ffc9;
LAB_0044ffd9:
    if ((*(int *)(in_ECX + 0x60e4) == 4) || (*(int *)(in_ECX + 0x60e4) == 3)) {
      FUN_0044fcbf();
    }
  }
  *(int *)(in_ECX + 0x60ec) = iVar1;
LAB_0044fffc:
  cVar2 = FUN_0045f6ee();
  if ((cVar2 == '\0') || (local_8 = 1, *(int *)(extraout_ECX + 0x240) == 0)) {
    local_8 = 0;
  }
  (**(code **)(*(int *)(in_ECX + 0x31a0) + 0x28))(local_8);
  (**(code **)(*(int *)(in_ECX + 0x468) + 0x84))();
  (**(code **)(*(int *)(in_ECX + 4) + 4))();
  return;
}

