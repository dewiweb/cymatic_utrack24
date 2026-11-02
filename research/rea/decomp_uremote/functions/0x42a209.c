// rea decompile_all
// name: FUN_0042a209
// address: 0x42a209
// body: available
// range: 0x42a209-0x42a28b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0042a209(void)

{
  byte bVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  
  *(int *)(in_EAX + 0x168) = *(int *)(in_EAX + 0x168) + *(int *)(in_EAX + 0x174);
  iVar2 = *(int *)(in_EAX + 0x16c);
  if (*(int *)(in_EAX + 0x168) < iVar2) {
    bVar1 = *(byte *)(*(int *)(in_EAX + 0x164) + *(int *)(in_EAX + 0x168));
    *(byte *)(in_EAX + 0x170) = bVar1;
    iVar3 = (int)(char)(&DAT_0090be50)[bVar1];
    *(int *)(in_EAX + 0x174) = iVar3;
    if (iVar3 < 0) {
      if (iVar2 <= *(int *)(in_EAX + 0x168) + 1) goto LAB_0042a280;
      *(uint *)(in_EAX + 0x174) =
           2 - (uint)*(byte *)(*(int *)(in_EAX + 0x164) + 1 + *(int *)(in_EAX + 0x168)) * iVar3;
    }
    if (*(int *)(in_EAX + 0x168) + *(int *)(in_EAX + 0x174) <= iVar2) {
      return 0;
    }
  }
LAB_0042a280:
  *(undefined4 *)(in_EAX + 0xc) = 0x83;
  return 1;
}

