// rea decompile_all
// name: FUN_0040f9c0
// address: 0x40f9c0
// body: available
// range: 0x40f9c0-0x40fb7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040f9c0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *local_14;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puVar4 = in_EDX + (((int)param_1 - (int)in_EDX >> 2) - ((int)param_1 - (int)in_EDX >> 0x1f) >> 1);
  FUN_0040fc80(param_1 + -1);
  puVar8 = puVar4;
  while (local_8 = puVar8, in_EDX < local_8) {
    iVar2 = FUN_0040f400();
    if ((iVar2 < 0) || (iVar2 = FUN_0040f400(), puVar8 = local_8 + -1, iVar2 < 0)) break;
  }
  do {
    puVar4 = puVar4 + 1;
    puVar8 = puVar4;
    local_14 = puVar4;
    local_c = puVar4;
    puVar3 = local_8;
    if (param_1 <= puVar4) break;
    iVar2 = FUN_0040f400();
    if ((iVar2 < 0) || (iVar2 = FUN_0040f400(), iVar2 < 0)) break;
  } while( true );
joined_r0x0040fa64:
  puVar6 = local_8;
  if (param_1 <= puVar4) {
joined_r0x0040faa9:
    for (; puVar5 = puVar4, puVar7 = puVar8, in_EDX < local_8; local_8 = local_8 + -1) {
      puVar6 = puVar6 + -1;
      iVar2 = FUN_0040f400();
      if (-1 < iVar2) {
        iVar2 = FUN_0040f400();
        puVar5 = local_14;
        puVar7 = local_c;
        if (iVar2 < 0) break;
        puVar3 = puVar3 + -1;
        if (puVar3 != puVar6) {
          uVar1 = *puVar3;
          *puVar3 = *puVar6;
          *puVar6 = uVar1;
        }
      }
      puVar4 = local_14;
      puVar8 = local_c;
    }
    if (local_8 == in_EDX) {
      if (puVar5 == param_1) {
        in_ECX[1] = puVar7;
        *in_ECX = puVar3;
        return;
      }
      if (puVar7 != puVar5) {
        uVar1 = *puVar3;
        *puVar3 = *puVar7;
        *puVar7 = uVar1;
      }
      puVar4 = puVar5 + 1;
      uVar1 = *puVar3;
      *puVar3 = *puVar5;
      *puVar5 = uVar1;
      puVar8 = puVar7 + 1;
      local_14 = puVar4;
      local_c = puVar7 + 1;
      puVar3 = puVar3 + 1;
    }
    else {
      local_8 = local_8 + -1;
      if (puVar5 == param_1) {
        puVar3 = puVar3 + -1;
        if (local_8 != puVar3) {
          uVar1 = *local_8;
          *local_8 = *puVar3;
          *puVar3 = uVar1;
        }
        uVar1 = *puVar3;
        puVar8 = puVar7 + -1;
        *puVar3 = *puVar8;
        *puVar8 = uVar1;
        puVar4 = puVar5;
        local_c = puVar8;
      }
      else {
        uVar1 = *puVar5;
        *puVar5 = *local_8;
        puVar4 = puVar5 + 1;
        *local_8 = uVar1;
        puVar8 = puVar7;
        local_14 = puVar4;
      }
    }
    goto joined_r0x0040fa64;
  }
  iVar2 = FUN_0040f400();
  local_c = puVar8;
  if (-1 < iVar2) {
    iVar2 = FUN_0040f400();
    local_14 = puVar4;
    if (iVar2 < 0) goto joined_r0x0040faa9;
    local_c = puVar8 + 1;
    if (puVar8 != puVar4) {
      uVar1 = *puVar8;
      *puVar8 = *puVar4;
      *puVar4 = uVar1;
    }
  }
  puVar4 = puVar4 + 1;
  puVar8 = local_c;
  local_14 = puVar4;
  goto joined_r0x0040fa64;
}

