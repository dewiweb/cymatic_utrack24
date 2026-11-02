// rea decompile_all
// name: FUN_004c09cc
// address: 0x4c09cc
// body: available
// range: 0x4c09cc-0x4c0ab8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c09cc(int param_1,int param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int in_ECX;
  byte local_5;
  
  if (in_EAX < 0) {
    in_EAX = 0;
  }
  if (param_3 < 0) {
    param_3 = 0;
  }
  if ((*(int *)(in_ECX + 0x18) == in_EAX) && (*(int *)(in_ECX + 0x1c) == param_3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((*(int *)(in_ECX + 0x10) == param_1) && (*(int *)(in_ECX + 0x14) == param_2)) {
    local_5 = 0;
    if (!bVar1) {
      return;
    }
  }
  else {
    local_5 = 1;
  }
  cVar2 = FUN_004c016b();
  if ((cVar2 != '\0') && (FUN_004c2bee(), (*(byte *)(in_ECX + 0x68) & 1) == 0)) {
    FUN_004c1690();
  }
  *(int *)(in_ECX + 0x10) = param_1;
  *(int *)(in_ECX + 0x14) = param_2;
  *(int *)(in_ECX + 0x18) = in_EAX;
  *(int *)(in_ECX + 0x1c) = param_3;
  if (cVar2 == '\0') {
    if (*(int **)(in_ECX + 0x40) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x40) + 8))();
    }
  }
  else if (bVar1) {
    FUN_004c1613(in_ECX);
  }
  else if ((*(byte *)(in_ECX + 0x68) & 1) == 0) {
    FUN_004c1690();
  }
  *(byte *)(in_ECX + 0x6a) = (bVar1 * '\x02' | local_5) * '\x02' | *(byte *)(in_ECX + 0x6a) & 0xf9;
  if (((*(byte *)(in_ECX + 0x68) & 1) != 0) && (iVar3 = FUN_004c0453(), iVar3 != 0)) {
    FUN_004ed554();
  }
  FUN_004c0ab9();
  return;
}

