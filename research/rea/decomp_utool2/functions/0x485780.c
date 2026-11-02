// rea decompile_all
// name: FUN_00485780
// address: 0x485780
// body: available
// range: 0x485780-0x485840 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00485780(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  int in_ECX;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  undefined1 local_10 [8];
  int local_8;
  
  local_8 = *(int *)(*(int *)(in_ECX + 0x68) + 0xc);
  pbVar4 = (byte *)(local_8 * param_1 + *(int *)(in_ECX + 0x6c));
  do {
    puVar2 = (uint *)FUN_004650f0(local_10,param_1);
    uVar1 = *puVar2;
    iVar5 = 0x100 - (uint)*(byte *)((int)puVar2 + 3);
    uVar3 = (((uint)pbVar4[2] << 0x10 | (uint)*pbVar4) * iVar5 >> 8 & 0xff00ff) + (uVar1 & 0xff00ff)
    ;
    uVar3 = (0x100 - (uVar3 >> 8 & 0xff00ff) | uVar3) & 0xff00ff;
    *pbVar4 = (byte)uVar3;
    iVar5 = ((uint)pbVar4[1] * iVar5 >> 8) + (uVar1 >> 8 & 0xff00ff);
    pbVar4[1] = -(char)((uint)iVar5 >> 8) | (byte)iVar5;
    param_2 = param_2 + -1;
    pbVar4[2] = (byte)(uVar3 >> 0x10);
    pbVar4 = pbVar4 + local_8;
    param_1 = param_1 + 1;
  } while (0 < param_2);
  return;
}

