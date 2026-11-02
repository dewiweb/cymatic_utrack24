// rea decompile_all
// name: FUN_0067b450
// address: 0x67b450
// body: available
// range: 0x67b450-0x67b918 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067b450(float *param_1,float *param_2,float param_3,float param_4,float param_5)

{
  int iVar1;
  int *in_ECX;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  fVar2 = param_1[3] * 0.5;
  if (param_5 <= param_1[3] * 0.5) {
    fVar2 = param_5;
  }
  FUN_00682e50();
  FUN_00418cd0(&local_18);
  fVar3 = param_2[1];
  if ((((local_18 <= param_3) && (fVar3 <= param_4)) && (param_3 < local_18 + local_10)) &&
     (param_4 < fVar3 + (param_1[1] - fVar3))) {
    FUN_00682d90();
    FUN_00682d90();
    FUN_00682d90();
  }
  uVar4 = 0x67b5a4;
  FUN_00682d90();
  fVar2 = (fVar2 + fVar2) * 0.5;
  FUN_0067b920(fVar2,0,0,0x3fc90fdb,uVar4);
  fVar3 = *param_1 + param_1[2];
  if (((fVar3 <= param_3) && (local_14 <= param_4)) &&
     ((param_3 < fVar3 + ((param_2[2] + *param_2) - fVar3) && (param_4 < local_14 + local_c)))) {
    FUN_00682d90();
    FUN_00682d90();
    FUN_00682d90();
  }
  uVar4 = 0x67b6b0;
  FUN_00682d90();
  FUN_0067b920(fVar2,0,0x3fc90fdb,0x40490fdb,uVar4);
  fVar3 = param_1[1] + param_1[3];
  if (((local_18 <= param_3) && (fVar3 <= param_4)) &&
     ((param_3 < local_18 + local_10 && (param_4 < fVar3 + ((param_2[3] + param_2[1]) - fVar3))))) {
    FUN_00682d90();
    FUN_00682d90();
    FUN_00682d90();
  }
  uVar4 = 0x67b7a6;
  FUN_00682d90();
  FUN_0067b920(fVar2,0,0x40490fdb,0x4096cbe4,uVar4);
  fVar3 = *param_2;
  if ((((fVar3 <= param_3) && (local_14 <= param_4)) && (param_3 < fVar3 + (*param_1 - fVar3))) &&
     (param_4 < local_14 + local_c)) {
    FUN_00682d90();
    FUN_00682d90();
    FUN_00682d90();
  }
  uVar4 = 0x67b87f;
  FUN_00682d90();
  FUN_0067b920(fVar2,0,0x4096cbe4,0x40c77641,uVar4);
  iVar1 = in_ECX[2];
  if ((iVar1 != 0) && (*(float *)(*in_ECX + -4 + iVar1 * 4) != 100005.0)) {
    if (in_ECX[1] < iVar1 + 1) {
      FUN_00409cf0((iVar1 + 1) / 2 + iVar1 + 9 & 0xfffffff8);
    }
    iVar1 = in_ECX[2];
    in_ECX[2] = iVar1 + 1;
    *(undefined4 *)(*in_ECX + iVar1 * 4) = 0x47c35280;
  }
  return;
}

