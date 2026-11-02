// rea decompile_all
// name: FUN_005c3c40
// address: 0x5c3c40
// body: available
// range: 0x5c3c40-0x5c3d88 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c3c40(byte *param_1)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  char cVar4;
  int *in_ECX;
  uint uVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x10);
  pbVar3 = param_1;
  if (4 < iVar1) {
    pbVar3 = *(byte **)param_1;
  }
  if (((*pbVar3 & 0xf0) == 0x90) || ((*pbVar3 & 0xf0) == 0x80)) {
    pbVar3 = param_1;
    if (4 < iVar1) {
      pbVar3 = *(byte **)param_1;
    }
    if (pbVar3[2] != 0) {
      pbVar3 = param_1;
      if (4 < iVar1) {
        pbVar3 = *(byte **)param_1;
      }
      if (((*pbVar3 & 0xf0) == 0x90) || ((*pbVar3 & 0xf0) == 0x80)) {
        pbVar3 = param_1;
        if (4 < iVar1) {
          pbVar3 = *(byte **)param_1;
        }
        bVar2 = pbVar3[2];
      }
      else {
        bVar2 = 0;
      }
      uVar5 = (uint)bVar2;
      if (uVar5 < 0x41) {
        iVar6 = uVar5 << 7;
      }
      else {
        iVar6 = (int)(((float)(int)(uVar5 - 0x40) * 8191.0) / 63.0 + (float)(undefined *)0x0) +
                0x2000;
      }
      pbVar3 = param_1;
      if (4 < iVar1) {
        pbVar3 = *(byte **)param_1;
      }
      if (4 < iVar1) {
        param_1 = *(byte **)param_1;
      }
      if ((*param_1 & 0xf0) == 0xf0) {
        cVar4 = '\0';
      }
      else {
        cVar4 = (*param_1 & 0xf) + 1;
      }
      (**(code **)(*in_ECX + 8))(cVar4,pbVar3[1],iVar6);
      return;
    }
  }
  pbVar3 = param_1;
  if (4 < iVar1) {
    pbVar3 = *(byte **)param_1;
  }
  if (4 < iVar1) {
    param_1 = *(byte **)param_1;
  }
  if ((*param_1 & 0xf0) == 0xf0) {
    (**(code **)(*in_ECX + 0xc))(0,pbVar3[1],0x2000);
    return;
  }
  (**(code **)(*in_ECX + 0xc))((*param_1 & 0xf) + 1,pbVar3[1],0x2000);
  return;
}

