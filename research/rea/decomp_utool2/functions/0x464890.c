// rea decompile_all
// name: FUN_00464890
// address: 0x464890
// body: available
// range: 0x464890-0x4649f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00464890(float *param_1)

{
  float fVar1;
  float fVar2;
  uint *in_ECX;
  uint uVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint local_28;
  uint local_20;
  uint local_18;
  uint local_10;
  
  dVar5 = (double)(*param_1 * 256.0) + 6755399441055744.0;
  local_28 = SUB84(dVar5,0);
  *in_ECX = local_28;
  dVar6 = (double)(param_1[1] * 256.0) + 6755399441055744.0;
  local_10 = SUB84(dVar6,0);
  in_ECX[1] = local_10;
  uVar3 = (int)local_10 >> 8;
  dVar7 = (double)((param_1[2] + *param_1) * 256.0) + 6755399441055744.0;
  local_20 = SUB84(dVar7,0);
  in_ECX[2] = local_20;
  fVar1 = param_1[3];
  fVar2 = param_1[1];
  in_ECX[4] = uVar3;
  dVar8 = (double)((fVar1 + fVar2) * 256.0) + 6755399441055744.0;
  local_18 = SUB84(dVar8,0);
  uVar4 = (int)local_18 >> 8;
  in_ECX[3] = local_18;
  if (uVar3 == uVar4) {
    in_ECX[8] = local_18 - local_10;
    uVar3 = uVar3 + 1;
    in_ECX[10] = 0;
    in_ECX[1] = uVar3;
    in_ECX[3] = uVar3;
    in_ECX[6] = uVar3;
  }
  else {
    if (((ulonglong)dVar6 & 0xff) == 0) {
      in_ECX[8] = 0;
      in_ECX[1] = uVar3;
    }
    else {
      in_ECX[8] = 0xff - (local_10 & 0xff);
      in_ECX[1] = uVar3 + 1;
    }
    in_ECX[10] = local_18 & 0xff;
    in_ECX[3] = uVar4;
    in_ECX[6] = (((ulonglong)dVar8 & 0xff) != 0) + uVar4;
  }
  uVar4 = (int)local_20 >> 8;
  uVar3 = (int)local_28 >> 8;
  in_ECX[5] = uVar3;
  if (uVar3 == uVar4) {
    in_ECX[0xb] = 0;
    uVar3 = uVar3 + 1;
    in_ECX[9] = local_20 - local_28;
    *in_ECX = uVar3;
    in_ECX[2] = uVar3;
    in_ECX[7] = uVar3;
    return;
  }
  if (((ulonglong)dVar5 & 0xff) == 0) {
    in_ECX[9] = 0;
  }
  else {
    uVar3 = uVar3 + 1;
    in_ECX[9] = 0xff - (local_28 & 0xff);
  }
  *in_ECX = uVar3;
  in_ECX[2] = uVar4;
  in_ECX[0xb] = local_20 & 0xff;
  in_ECX[7] = (SUB81(dVar7,0) != '\0') + uVar4;
  return;
}

