// rea decompile_all
// name: FUN_00424a00
// address: 0x424a00
// body: available
// range: 0x424a00-0x424f4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00424a00(int param_1,int param_2)

{
  int in_ECX;
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      fVar13 = *(float *)(param_1 + iVar1 * 4) * *(float *)(in_ECX + 0x18);
      if (*(int *)(in_ECX + 0x188) < 1) {
        fVar12 = *(float *)(in_ECX + 0x180);
      }
      else {
        fVar12 = *(float *)(in_ECX + 0x184) + *(float *)(in_ECX + 0x17c);
        *(int *)(in_ECX + 0x188) = *(int *)(in_ECX + 0x188) + -1;
        *(float *)(in_ECX + 0x17c) = fVar12;
      }
      if (*(int *)(in_ECX + 0x19c) < 1) {
        fVar10 = *(float *)(in_ECX + 0x194);
      }
      else {
        fVar10 = *(float *)(in_ECX + 0x198) + *(float *)(in_ECX + 400);
        *(int *)(in_ECX + 0x19c) = *(int *)(in_ECX + 0x19c) + -1;
        *(float *)(in_ECX + 400) = fVar10;
      }
      fVar11 = 1.0 - fVar12;
      fVar9 = *(float *)(*(int *)(in_ECX + 0x1c) + *(int *)(in_ECX + 0x24) * 4);
      fVar2 = (fVar11 * fVar9 + *(float *)(in_ECX + 0x28) * fVar12 + 0.1) - 0.1;
      *(float *)(in_ECX + 0x28) = fVar2;
      *(float *)(*(int *)(in_ECX + 0x1c) + *(int *)(in_ECX + 0x24) * 4) =
           (fVar2 * fVar10 + fVar13 + 0.1) - 0.1;
      *(int *)(in_ECX + 0x24) = (*(int *)(in_ECX + 0x24) + 1) % *(int *)(in_ECX + 0x20);
      fVar2 = *(float *)(*(int *)(in_ECX + 0x2c) + *(int *)(in_ECX + 0x34) * 4);
      fVar3 = (fVar11 * fVar2 + *(float *)(in_ECX + 0x38) * fVar12 + 0.1) - 0.1;
      *(float *)(in_ECX + 0x38) = fVar3;
      *(float *)(*(int *)(in_ECX + 0x2c) + *(int *)(in_ECX + 0x34) * 4) =
           (fVar3 * fVar10 + fVar13 + 0.1) - 0.1;
      *(int *)(in_ECX + 0x34) = (*(int *)(in_ECX + 0x34) + 1) % *(int *)(in_ECX + 0x30);
      fVar3 = *(float *)(*(int *)(in_ECX + 0x3c) + *(int *)(in_ECX + 0x44) * 4);
      fVar4 = (fVar11 * fVar3 + *(float *)(in_ECX + 0x48) * fVar12 + 0.1) - 0.1;
      *(float *)(in_ECX + 0x48) = fVar4;
      *(float *)(*(int *)(in_ECX + 0x3c) + *(int *)(in_ECX + 0x44) * 4) =
           (fVar4 * fVar10 + fVar13 + 0.1) - 0.1;
      *(int *)(in_ECX + 0x44) = (*(int *)(in_ECX + 0x44) + 1) % *(int *)(in_ECX + 0x40);
      fVar4 = *(float *)(*(int *)(in_ECX + 0x4c) + *(int *)(in_ECX + 0x54) * 4);
      fVar5 = (fVar11 * fVar4 + *(float *)(in_ECX + 0x58) * fVar12 + 0.1) - 0.1;
      *(float *)(in_ECX + 0x58) = fVar5;
      *(float *)(*(int *)(in_ECX + 0x4c) + *(int *)(in_ECX + 0x54) * 4) =
           (fVar5 * fVar10 + fVar13 + 0.1) - 0.1;
      *(int *)(in_ECX + 0x54) = (*(int *)(in_ECX + 0x54) + 1) % *(int *)(in_ECX + 0x50);
      fVar5 = *(float *)(*(int *)(in_ECX + 0x5c) + *(int *)(in_ECX + 100) * 4);
      fVar6 = (fVar11 * fVar5 + *(float *)(in_ECX + 0x68) * fVar12 + 0.1) - 0.1;
      *(float *)(in_ECX + 0x68) = fVar6;
      *(float *)(*(int *)(in_ECX + 0x5c) + *(int *)(in_ECX + 100) * 4) =
           (fVar6 * fVar10 + fVar13 + 0.1) - 0.1;
      *(int *)(in_ECX + 100) = (*(int *)(in_ECX + 100) + 1) % *(int *)(in_ECX + 0x60);
      fVar6 = *(float *)(*(int *)(in_ECX + 0x6c) + *(int *)(in_ECX + 0x74) * 4);
      fVar7 = (fVar11 * fVar6 + *(float *)(in_ECX + 0x78) * fVar12 + 0.1) - 0.1;
      *(float *)(in_ECX + 0x78) = fVar7;
      *(float *)(*(int *)(in_ECX + 0x6c) + *(int *)(in_ECX + 0x74) * 4) =
           (fVar7 * fVar10 + fVar13 + 0.1) - 0.1;
      *(int *)(in_ECX + 0x74) = (*(int *)(in_ECX + 0x74) + 1) % *(int *)(in_ECX + 0x70);
      fVar7 = *(float *)(*(int *)(in_ECX + 0x7c) + *(int *)(in_ECX + 0x84) * 4);
      fVar8 = (fVar11 * fVar7 + *(float *)(in_ECX + 0x88) * fVar12 + 0.1) - 0.1;
      *(float *)(in_ECX + 0x88) = fVar8;
      *(float *)(*(int *)(in_ECX + 0x7c) + *(int *)(in_ECX + 0x84) * 4) =
           (fVar8 * fVar10 + fVar13 + 0.1) - 0.1;
      *(int *)(in_ECX + 0x84) = (*(int *)(in_ECX + 0x84) + 1) % *(int *)(in_ECX + 0x80);
      fVar8 = *(float *)(*(int *)(in_ECX + 0x8c) + *(int *)(in_ECX + 0x94) * 4);
      fVar9 = fVar8 + fVar7 + fVar6 + fVar5 + fVar4 + fVar3 + fVar2 + fVar9 + 0.0;
      fVar12 = (fVar11 * fVar8 + *(float *)(in_ECX + 0x98) * fVar12 + 0.1) - 0.1;
      *(float *)(in_ECX + 0x98) = fVar12;
      *(float *)(*(int *)(in_ECX + 0x8c) + *(int *)(in_ECX + 0x94) * 4) =
           (fVar12 * fVar10 + fVar13 + 0.1) - 0.1;
      *(int *)(in_ECX + 0x94) = (*(int *)(in_ECX + 0x94) + 1) % *(int *)(in_ECX + 0x90);
      fVar13 = *(float *)(*(int *)(in_ECX + 0x11c) + *(int *)(in_ECX + 0x124) * 4);
      fVar12 = fVar13 - fVar9;
      *(float *)(*(int *)(in_ECX + 0x11c) + *(int *)(in_ECX + 0x124) * 4) =
           (fVar13 * 0.5 + fVar9 + 0.1) - 0.1;
      *(int *)(in_ECX + 0x124) = (*(int *)(in_ECX + 0x124) + 1) % *(int *)(in_ECX + 0x120);
      fVar13 = *(float *)(*(int *)(in_ECX + 0x128) + *(int *)(in_ECX + 0x130) * 4);
      fVar10 = fVar13 - fVar12;
      *(float *)(*(int *)(in_ECX + 0x128) + *(int *)(in_ECX + 0x130) * 4) =
           (fVar13 * 0.5 + fVar12 + 0.1) - 0.1;
      *(int *)(in_ECX + 0x130) = (*(int *)(in_ECX + 0x130) + 1) % *(int *)(in_ECX + 300);
      fVar13 = *(float *)(*(int *)(in_ECX + 0x134) + *(int *)(in_ECX + 0x13c) * 4);
      *(float *)(*(int *)(in_ECX + 0x134) + *(int *)(in_ECX + 0x13c) * 4) =
           (fVar13 * 0.5 + fVar10 + 0.1) - 0.1;
      *(int *)(in_ECX + 0x13c) = (*(int *)(in_ECX + 0x13c) + 1) % *(int *)(in_ECX + 0x138);
      fVar13 = fVar13 - fVar10;
      fVar12 = *(float *)(*(int *)(in_ECX + 0x140) + *(int *)(in_ECX + 0x148) * 4);
      *(float *)(*(int *)(in_ECX + 0x140) + *(int *)(in_ECX + 0x148) * 4) =
           (fVar12 * 0.5 + fVar13 + 0.1) - 0.1;
      *(int *)(in_ECX + 0x148) = (*(int *)(in_ECX + 0x148) + 1) % *(int *)(in_ECX + 0x144);
      if (*(int *)(in_ECX + 0x1b0) < 1) {
        fVar10 = *(float *)(in_ECX + 0x1a8);
      }
      else {
        fVar10 = *(float *)(in_ECX + 0x1ac) + *(float *)(in_ECX + 0x1a4);
        *(int *)(in_ECX + 0x1b0) = *(int *)(in_ECX + 0x1b0) + -1;
        *(float *)(in_ECX + 0x1a4) = fVar10;
      }
      if (*(int *)(in_ECX + 0x1c4) < 1) {
        fVar9 = *(float *)(in_ECX + 0x1bc);
      }
      else {
        fVar9 = *(float *)(in_ECX + 0x1c0) + *(float *)(in_ECX + 0x1b8);
        *(int *)(in_ECX + 0x1c4) = *(int *)(in_ECX + 0x1c4) + -1;
        *(float *)(in_ECX + 0x1b8) = fVar9;
      }
      *(float *)(param_1 + iVar1 * 4) =
           *(float *)(param_1 + iVar1 * 4) * fVar10 + fVar9 * (fVar12 - fVar13);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

