// rea decompile_all
// name: FUN_00515100
// address: 0x515100
// body: available
// range: 0x515100-0x51526a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00515100(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int in_ECX;
  byte bVar4;
  byte bVar5;
  
  iVar1 = *(int *)(in_ECX + 0x2e8);
  *(undefined4 *)(in_ECX + 0x2e0) = param_1;
  bVar5 = (byte)((uint)param_1 >> 0x1f);
  bVar4 = bVar5 ^ 1;
  if ((*(byte *)(iVar1 + 0x19d) >> 4 & 1) == bVar4) {
    *(byte *)(iVar1 + 0x19d) = bVar5 << 4 | *(byte *)(iVar1 + 0x19d) & 0xef;
    iVar1 = *(int *)(iVar1 + 0x140);
    if ((iVar1 == 0) ||
       (((*(byte *)(iVar1 + 0x69) & 0x10) == 0 &&
        ((*(int *)(iVar1 + 0xc) == 0 || (cVar3 = FUN_006e6320(), cVar3 != '\0')))))) {
      FUN_006cc240();
    }
  }
  iVar1 = *(int *)(in_ECX + 0x2e8);
  if ((*(byte *)(iVar1 + 0x27d) >> 4 & 1) == bVar4) {
    *(byte *)(iVar1 + 0x27d) = bVar5 << 4 | *(byte *)(iVar1 + 0x27d) & 0xef;
    iVar1 = *(int *)(iVar1 + 0x220);
    if ((iVar1 == 0) ||
       (((*(byte *)(iVar1 + 0x69) & 0x10) == 0 &&
        ((*(int *)(iVar1 + 0xc) == 0 || (cVar3 = FUN_006e6320(), cVar3 != '\0')))))) {
      FUN_006cc240();
    }
  }
  iVar1 = *(int *)(in_ECX + 0x2e8);
  if ((*(byte *)(iVar1 + 0x43d) >> 4 & 1) == bVar4) {
    *(byte *)(iVar1 + 0x43d) = bVar5 << 4 | *(byte *)(iVar1 + 0x43d) & 0xef;
    iVar1 = *(int *)(iVar1 + 0x3e0);
    if ((iVar1 == 0) ||
       (((*(byte *)(iVar1 + 0x69) & 0x10) == 0 &&
        ((*(int *)(iVar1 + 0xc) == 0 || (cVar3 = FUN_006e6320(), cVar3 != '\0')))))) {
      FUN_006cc240();
    }
  }
  iVar1 = *(int *)(in_ECX + 0x2e8);
  if ((*(byte *)(iVar1 + 0x51d) >> 4 & 1) == bVar4) {
    iVar2 = *(int *)(iVar1 + 0x4c0);
    *(byte *)(iVar1 + 0x51d) = bVar5 << 4 | *(byte *)(iVar1 + 0x51d) & 0xef;
    if (iVar2 != 0) {
      if ((*(byte *)(iVar2 + 0x69) & 0x10) != 0) {
        return;
      }
      if ((*(int *)(iVar2 + 0xc) != 0) && (cVar3 = FUN_006e6320(), cVar3 == '\0')) {
        return;
      }
    }
    FUN_006cc240();
  }
  return;
}

