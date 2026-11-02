// rea decompile_all
// name: FUN_0042728d
// address: 0x42728d
// body: available
// range: 0x42728d-0x4272d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042728d(void)

{
  int in_EAX;
  short *in_ECX;
  int in_EDX;
  int iVar1;
  int unaff_EDI;
  
  *(short *)(in_EAX + 8) = in_ECX[1] - (short)in_EDX;
  *(short *)(in_EAX + 10) = *in_ECX - (short)unaff_EDI;
  iVar1 = in_EDX * 8;
  *(int *)(in_EAX + 0xc) = *(int *)(in_ECX + 10) + iVar1;
  *(int *)(in_EAX + 0x10) = *(int *)(in_ECX + 2) + iVar1;
  *(int *)(in_EAX + 0x14) = *(int *)(in_ECX + 0xc) + iVar1;
  *(int *)(in_EAX + 0x18) = *(int *)(in_ECX + 4) + in_EDX;
  *(int *)(in_EAX + 0x1c) = *(int *)(in_ECX + 6) + unaff_EDI * 2;
  *(short *)(in_EAX + 0x20) = (short)in_EDX;
  return;
}

