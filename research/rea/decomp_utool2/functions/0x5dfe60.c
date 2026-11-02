// rea decompile_all
// name: FUN_005dfe60
// address: 0x5dfe60
// body: available
// range: 0x5dfe60-0x5e012e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005dfe60(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *in_ECX;
  uint uVar6;
  int in_EDX;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  int local_24;
  int local_18;
  float *local_14;
  
  iVar2 = (int)(in_EDX + (in_EDX >> 0x1f & 3U)) >> 2;
  iVar3 = FUN_004c554b(iVar2 * 4);
  iVar4 = FUN_004c554b((iVar2 + in_EDX) * 4);
  fVar12 = (float)in_EDX;
  FUN_00436450();
  fVar13 = 2.0;
  FUN_00436450();
  fVar12 = fVar12 / fVar13 + 0.5;
  FUN_00436410();
  *in_ECX = in_EDX;
  in_ECX[3] = iVar3;
  in_ECX[1] = (int)fVar12;
  in_ECX[2] = iVar4;
  if (0 < iVar2) {
    local_24 = 0;
    iVar10 = 0;
    local_18 = 1;
    local_14 = (float *)(iVar4 + (in_EDX >> 1) * 4);
    do {
      dVar14 = (double)local_24 * (3.141592653589793 / (double)in_EDX);
      dVar15 = dVar14;
      FUN_006f7d20();
      *(float *)(iVar4 + iVar10 * 8) = (float)dVar15;
      FUN_006f9250();
      *(float *)(iVar4 + 4 + iVar10 * 8) = (float)-dVar14;
      dVar14 = (double)local_18 * (3.141592653589793 / (double)(in_EDX * 2));
      dVar15 = dVar14;
      FUN_006f7d20();
      *local_14 = (float)dVar15;
      FUN_006f9250();
      iVar10 = iVar10 + 1;
      local_18 = local_18 + 2;
      local_24 = local_24 + 4;
      local_14[1] = (float)dVar14;
      local_14 = local_14 + 2;
    } while (iVar10 < iVar2);
  }
  iVar2 = (int)(in_EDX + (in_EDX >> 0x1f & 7U)) >> 3;
  if (0 < iVar2) {
    iVar10 = 2;
    pfVar8 = (float *)(iVar4 + in_EDX * 4);
    local_24 = iVar2;
    do {
      dVar14 = (double)iVar10 * (3.141592653589793 / (double)in_EDX);
      dVar15 = dVar14;
      FUN_006f7d20();
      *pfVar8 = (float)(dVar15 * 0.5);
      FUN_006f9250();
      iVar10 = iVar10 + 4;
      local_24 = local_24 + -1;
      pfVar8[1] = (float)(dVar14 * -0.5);
      pfVar8 = pfVar8 + 2;
    } while (local_24 != 0);
  }
  cVar1 = (char)(int)fVar12;
  uVar11 = 1 << (cVar1 - 2U & 0x1f);
  uVar9 = 0;
  if (0 < iVar2) {
    do {
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = uVar11;
      while (uVar5 != 0) {
        if ((uVar9 & uVar5) != 0) {
          uVar7 = uVar7 | 1 << (uVar6 & 0x1f);
        }
        uVar6 = uVar6 + 1;
        uVar5 = (int)uVar11 >> ((byte)uVar6 & 0x1f);
      }
      *(uint *)(iVar3 + uVar9 * 8) = (~uVar7 & (1 << (cVar1 - 1U & 0x1f)) - 1U) - 1;
      *(uint *)(iVar3 + 4 + uVar9 * 8) = uVar7;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < iVar2);
  }
  in_ECX[4] = (int)(4.0 / (float)in_EDX);
  return;
}

