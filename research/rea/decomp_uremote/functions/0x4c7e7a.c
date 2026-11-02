// rea decompile_all
// name: FUN_004c7e7a
// address: 0x4c7e7a
// body: available
// range: 0x4c7e7a-0x4c7ebe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c7e7a(undefined4 param_1)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  int *in_ECX;
  int *extraout_EDX;
  
  pcVar1 = (char *)((int)in_ECX + 0xd6);
  if (*pcVar1 != '\0') {
    cVar3 = FUN_004c3153();
    in_ECX = extraout_EDX;
    if (cVar3 != '\0') {
      *pcVar1 = '\0';
      *(undefined1 *)((int)extraout_EDX + 0xd7) = 1;
    }
  }
  iVar2 = *in_ECX;
  uVar4 = FUN_004c7c7c();
  uVar4 = FUN_004c7c89(uVar4);
  (**(code **)(iVar2 + 0xbc))(param_1,uVar4);
  return;
}

