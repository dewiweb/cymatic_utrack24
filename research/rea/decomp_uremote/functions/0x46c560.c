// rea decompile_all
// name: FUN_0046c560
// address: 0x46c560
// body: available
// range: 0x46c560-0x46c5dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x46c5d9 to 0x46ce5e FUN_0046ce5e (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046c560(void)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  
  iVar1 = *(int *)(in_EAX + 0x16bc);
  if (iVar1 < 0xe) {
    *(ushort *)(in_EAX + 0x16b8) =
         *(ushort *)(in_EAX + 0x16b8) | (ushort)(in_ECX << ((byte)iVar1 & 0x1f));
    *(int *)(in_EAX + 0x16bc) = iVar1 + 3;
  }
  else {
    *(ushort *)(in_EAX + 0x16b8) =
         *(ushort *)(in_EAX + 0x16b8) | (ushort)(in_ECX << ((byte)iVar1 & 0x1f));
    *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
         *(undefined1 *)(in_EAX + 0x16b8);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b9);
    iVar1 = *(int *)(in_EAX + 0x16bc);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x16bc) = iVar1 + -0xd;
    *(ushort *)(in_EAX + 0x16b8) = (ushort)in_ECX >> (0x10U - (char)iVar1 & 0x1f);
  }
  FUN_0046ce5e();
  return;
}

