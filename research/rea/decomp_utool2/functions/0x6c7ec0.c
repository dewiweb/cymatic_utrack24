// rea decompile_all
// name: FUN_006c7ec0
// address: 0x6c7ec0
// body: available
// range: 0x6c7ec0-0x6c7f9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006c7ec0(void)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int *in_ECX;
  undefined4 local_8;
  
  if (((*(byte *)((int)in_ECX + 0x69) & 0x10) != 0) ||
     ((in_ECX[3] != 0 && (cVar1 = FUN_006e6320(), cVar1 == '\0')))) {
    return 0;
  }
  cVar1 = (char)in_ECX[0x37];
  cVar2 = FUN_006c8040();
  *(char *)(in_ECX + 0x37) = cVar2;
  if (((-1 < in_ECX[0x2a]) && (cVar2 != '\0')) && (cVar1 == '\0')) {
    FUN_0063eb10(in_ECX[0x2a]);
  }
  uVar4 = FUN_006e2bd0();
  uVar4 = uVar4 & 0xff;
  uVar3 = FUN_006cc060(1);
  FUN_006c86c0(uVar3,uVar4);
  if (((*(byte *)((int)in_ECX + 0x69) & 0x10) == 0) &&
     ((in_ECX[3] == 0 || (cVar2 = FUN_006e6320(), cVar2 != '\0')))) {
    if (cVar1 == '\0') goto LAB_006c7f7b;
    if ((char)in_ECX[0x37] == '\0') {
      local_8 = DAT_00c8a9c8;
      (**(code **)(*in_ECX + 0xc4))(&local_8);
      return 1;
    }
  }
  if (cVar1 != '\0') {
    return 1;
  }
LAB_006c7f7b:
  if ((char)in_ECX[0x37] != '\0') {
    return 1;
  }
  return 0;
}

