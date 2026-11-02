// rea decompile_all
// name: FUN_006649e0
// address: 0x6649e0
// body: available
// range: 0x6649e0-0x664a90 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006649e0(void)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  int *in_ECX;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  
  puVar2 = (undefined4 *)in_ECX[6];
  iVar6 = puVar2[1];
  pbVar5 = (byte *)*puVar2;
  if (iVar6 == 0) {
    cVar3 = (*(code *)puVar2[3])();
    if (cVar3 == '\0') {
      return 0;
    }
    pbVar5 = (byte *)*puVar2;
    iVar6 = puVar2[1];
  }
  bVar1 = *pbVar5;
  pbVar5 = pbVar5 + 1;
  iVar6 = iVar6 + -1;
  if (iVar6 == 0) {
    cVar3 = (*(code *)puVar2[3])(in_ECX);
    if (cVar3 == '\0') {
      return 0;
    }
    pbVar5 = (byte *)*puVar2;
    iVar6 = puVar2[1];
  }
  uVar4 = (uint)*pbVar5;
  if ((bVar1 != 0xff) || (uVar4 != 0xd8)) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x35;
    *(uint *)(*in_ECX + 0x18) = (uint)bVar1;
    *(uint *)(*in_ECX + 0x1c) = uVar4;
    (**(code **)*in_ECX)(in_ECX);
  }
  in_ECX[0x5f] = uVar4;
  puVar2[1] = iVar6 + -1;
  *puVar2 = pbVar5 + 1;
  return 1;
}

