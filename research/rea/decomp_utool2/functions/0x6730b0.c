// rea decompile_all
// name: FUN_006730b0
// address: 0x6730b0
// body: available
// range: 0x6730b0-0x67315b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006730b0(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *in_ECX;
  uint uVar3;
  undefined2 *puVar4;
  undefined4 local_b;
  
  iVar1 = in_ECX[1];
  puVar4 = (undefined2 *)(in_ECX[3] * param_2 + in_ECX[2] * param_3 + *in_ECX);
  if (iVar1 == 1) {
    param_2._1_1_ = (byte)((ushort)*puVar4 >> 8);
    uVar3 = (*(byte *)(puVar4 + 1) | 0xffffff00) << 8 | (uint)param_2._1_1_;
    param_2._0_1_ = (undefined1)*puVar4;
  }
  else {
    if (iVar1 == 2) {
      puVar2 = (undefined4 *)FUN_00464390(&param_2);
      *param_1 = *puVar2;
      return;
    }
    if (iVar1 != 3) {
      *param_1 = 0;
      return;
    }
    param_2._0_1_ = *(undefined1 *)puVar4;
    uVar3 = (uint)CONCAT21(CONCAT11((undefined1)param_2,(undefined1)param_2),(undefined1)param_2);
  }
  local_b = CONCAT13((char)(uVar3 >> 0x10),
                     CONCAT12((char)(uVar3 >> 8),CONCAT11((char)uVar3,(undefined1)param_2)));
  *param_1 = local_b;
  return;
}

