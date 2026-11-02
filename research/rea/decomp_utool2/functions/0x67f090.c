// rea decompile_all
// name: FUN_0067f090
// address: 0x67f090
// body: available
// range: 0x67f090-0x67f229 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067f090(uint param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float local_c;
  float local_8;
  
  fVar1 = (float)(param_1 >> 8 & 0xff) / 255.0;
  fVar5 = (float)(param_1 >> 0x10 & 0xff) / 255.0;
  fVar4 = (float)(param_1 & 0xff) / 255.0;
  fVar1 = fVar1 * fVar1 * 0.691 + fVar5 * fVar5 * 0.241 + fVar4 * fVar4 * 0.068;
  uStack_14 = 0x67f109;
  FUN_00423c70();
  fVar4 = (float)(param_2 >> 8 & 0xff) / 255.0;
  fVar6 = (float)(param_2 >> 0x10 & 0xff) / 255.0;
  fVar5 = (float)(param_2 & 0xff) / 255.0;
  fVar4 = fVar4 * fVar4 * 0.691 + fVar6 * fVar6 * 0.241 + fVar5 * fVar5 * 0.068;
  uStack_14 = 0x67f17e;
  local_8 = fVar1;
  FUN_00423c70();
  fVar6 = 1.0;
  fVar1 = 0.0;
  fVar5 = 0.0;
  local_c = fVar4;
  do {
    fVar2 = fVar5 - local_8;
    uStack_14 = 0x67f1ad;
    fVar3 = local_c;
    FUN_00411660();
    fVar3 = fVar5 - fVar3;
    uStack_14 = 0x67f1bc;
    FUN_00411660();
    fVar7 = fVar6 - fVar2;
    fVar4 = fVar6 - fVar3;
    if (fVar3 <= fVar7) {
      if (fVar3 <= fVar4) {
        fVar4 = fVar3;
      }
    }
    else if (fVar7 <= fVar4) {
      fVar4 = fVar7;
    }
    if (fVar2 <= fVar4) {
      fVar4 = fVar2;
    }
    if (fVar1 < fVar4) {
      fVar1 = fVar4;
    }
    fVar5 = fVar5 + 0.02;
  } while (fVar5 < fVar6);
  FUN_00684d10(&uStack_18);
  FUN_00680d30(&local_c);
  uStack_18 = 0x67f223;
  FUN_0067f520();
  return;
}

