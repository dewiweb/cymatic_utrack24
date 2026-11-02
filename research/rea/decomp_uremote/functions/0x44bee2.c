// rea decompile_all
// name: FUN_0044bee2
// address: 0x44bee2
// body: available
// range: 0x44bee2-0x44bf9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044bee2(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  iVar2 = FUN_0044bfc5();
  iVar3 = (int)(*(int *)(in_ECX + 0x1c) + (*(int *)(in_ECX + 0x1c) >> 0x1f & 3U)) >> 2;
  if ((float)*(int *)(iVar2 + 4) * 1.5 <= (float)iVar3) {
    iVar2 = *(int *)(in_ECX + 0x9c);
    cVar1 = FUN_00448866();
    (**(code **)(iVar2 + 0x28))('\x01' - (cVar1 != '\0'));
    FUN_004c09cc(0,0,iVar3);
    FUN_004c09cc(0,*(int *)(in_ECX + 0xb8) + *(int *)(in_ECX + 0xb0),
                 (*(int *)(in_ECX + 0x1c) - *(int *)(in_ECX + 0xb8)) - *(int *)(in_ECX + 0xb0));
  }
  else {
    (**(code **)(*(int *)(in_ECX + 0x9c) + 0x28))(0);
    FUN_004c09cc(0,0,*(undefined4 *)(in_ECX + 0x1c));
  }
  return;
}

