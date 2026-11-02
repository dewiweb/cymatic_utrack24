// rea decompile_all
// name: FUN_0067b0b0
// address: 0x67b0b0
// body: available
// range: 0x67b0b0-0x67b1e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0067b0b0(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  float in_XMM1_Da;
  float in_XMM2_Da;
  int local_84;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  void *local_18;
  
  if ((((in_XMM1_Da <= *(float *)(in_ECX + 0xc)) || (*(float *)(in_ECX + 0x10) <= in_XMM1_Da)) ||
      (in_XMM2_Da <= *(float *)(in_ECX + 0x14))) || (*(float *)(in_ECX + 0x18) <= in_XMM2_Da)) {
    return false;
  }
  uVar2 = FUN_00680c30();
  FUN_00679e40(in_ECX,uVar2);
  iVar3 = 0;
  local_84 = 0;
  cVar1 = FUN_00679520();
  while (cVar1 != '\0') {
    if ((((local_5c <= in_XMM2_Da) && (in_XMM2_Da < local_54)) ||
        ((local_54 <= in_XMM2_Da && (in_XMM2_Da < local_5c)))) &&
       (((local_58 - local_60) * (in_XMM2_Da - local_5c)) / (local_54 - local_5c) + local_60 <=
        in_XMM1_Da)) {
      if (local_54 <= local_5c) {
        local_84 = local_84 + 1;
      }
      else {
        iVar3 = iVar3 + 1;
      }
    }
    cVar1 = FUN_00679520();
  }
  if (*(char *)(in_ECX + 0x1c) != '\0') {
    FID_conflict__free(local_18);
    return local_84 != iVar3;
  }
  FID_conflict__free(local_18);
  return (bool)((char)iVar3 + (char)local_84 & 1);
}

