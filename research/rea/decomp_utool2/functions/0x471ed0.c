// rea decompile_all
// name: FUN_00471ed0
// address: 0x471ed0
// body: available
// range: 0x471ed0-0x472185 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00471ed0(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,float param_7,float param_8)

{
  undefined4 in_EAX;
  ushort uVar2;
  int iVar1;
  float *in_ECX;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar2 = (ushort)((uint)in_EAX >> 0x10);
  if ((param_3 == param_5) && (param_4 == param_6)) {
    *in_ECX = param_3;
    in_ECX[1] = param_4;
    return CONCAT31(CONCAT21(uVar2,(param_4 == param_6) << 6 | (NAN(param_4) || NAN(param_6)) << 2 |
                                   2U | param_4 < param_6),1);
  }
  fVar4 = param_3 - param_1;
  param_8 = param_8 - param_6;
  param_7 = param_7 - param_5;
  fVar5 = param_4 - param_2;
  fVar3 = param_8 * fVar4 - fVar5 * param_7;
  iVar1 = (uint)CONCAT21(uVar2,(fVar3 == 0.0) << 6 | NAN(fVar3) << 2 | 2U | fVar3 < 0.0) << 8;
  if (fVar3 != 0.0) {
    fVar6 = ((param_2 - param_6) * param_7 - (param_1 - param_5) * param_8) / fVar3;
    *in_ECX = fVar6 * fVar4 + param_1;
    in_ECX[1] = fVar6 * fVar5 + param_2;
    if (fVar6 < 0.0) {
      return iVar1;
    }
    if (1.0 < fVar6) {
      return iVar1;
    }
    param_7 = ((param_2 - param_6) * fVar4 - (param_1 - param_5) * fVar5) / fVar3;
    goto joined_r0x00472178;
  }
  iVar1 = (uint)uVar2 << 0x10;
  if ((fVar4 == 0.0) &&
     (iVar1 = (uint)CONCAT21(uVar2,(fVar5 == 0.0) << 6 | NAN(fVar5) << 2 | 2U | fVar5 < 0.0) << 8,
     fVar5 == 0.0)) goto LAB_004720d5;
  uVar2 = (ushort)((uint)iVar1 >> 0x10);
  iVar1 = (uint)uVar2 << 0x10;
  if ((param_7 == 0.0) &&
     (iVar1 = (uint)CONCAT21(uVar2,(param_8 == 0.0) << 6 | NAN(param_8) << 2 | 2U | param_8 < 0.0)
              << 8, param_8 == 0.0)) goto LAB_004720d5;
  uVar2 = (ushort)((uint)iVar1 >> 0x10);
  if (fVar5 == 0.0) {
    if (param_8 != 0.0) {
      in_ECX[1] = param_2;
      param_8 = (param_2 - param_6) / param_8;
      *in_ECX = param_8 * param_7 + param_5;
      if (param_8 < 0.0) {
        return 0;
      }
      if (1.0 < param_8) {
        return 0;
      }
      return 1;
    }
LAB_00472001:
    if (fVar5 != 0.0) {
      in_ECX[1] = param_6;
      fVar5 = (param_6 - param_2) / fVar5;
      *in_ECX = fVar5 * fVar4 + param_1;
      if (fVar5 < 0.0) {
        return 0;
      }
      if (1.0 < fVar5) {
        return 0;
      }
      return 1;
    }
  }
  else if (param_8 == 0.0) goto LAB_00472001;
  if (fVar4 == 0.0) {
    iVar1 = (uint)uVar2 << 0x10;
    if (param_7 == 0.0) goto LAB_004720ae;
    *in_ECX = param_1;
    param_7 = (param_1 - param_5) / param_7;
    param_6 = param_7 * param_8 + param_6;
  }
  else {
    iVar1 = (uint)CONCAT21(uVar2,(param_7 == 0.0) << 6 | NAN(param_7) << 2 | 2U | param_7 < 0.0) <<
            8;
    if (param_7 != 0.0) goto LAB_004720d5;
LAB_004720ae:
    iVar1 = (uint)CONCAT21((short)((uint)iVar1 >> 0x10),
                           (fVar4 == 0.0) << 6 | NAN(fVar4) << 2 | 2U | fVar4 < 0.0) << 8;
    if (fVar4 == 0.0) {
LAB_004720d5:
      *in_ECX = (param_3 + param_5) * 0.5;
      in_ECX[1] = (param_4 + param_6) * 0.5;
      return iVar1;
    }
    *in_ECX = param_5;
    param_7 = (param_5 - param_1) / fVar4;
    param_6 = param_7 * fVar5 + param_2;
  }
  in_ECX[1] = param_6;
joined_r0x00472178:
  if ((0.0 <= param_7) && (param_7 <= 1.0)) {
    return 1;
  }
  return 0;
}

