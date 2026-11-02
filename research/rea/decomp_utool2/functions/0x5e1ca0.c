// rea decompile_all
// name: FUN_005e1ca0
// address: 0x5e1ca0
// body: available
// range: 0x5e1ca0-0x5e1fad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005e1ca0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 *puStack_1c;
  undefined4 local_c;
  
  iVar1 = *(int *)(in_ECX + 0x68);
  local_c = 0xffffff7e;
  if (iVar1 == 0) {
    local_c = 0xffffff7f;
  }
  else {
    puStack_1c = (undefined1 *)FUN_004c554b(0x100);
    *puStack_1c = 0;
    iVar2 = FUN_005e2290();
    if (iVar2 == 0) {
      if (*(void **)(iVar1 + 0x40) != (void *)0x0) {
        FID_conflict__free(*(void **)(iVar1 + 0x40));
      }
      uVar3 = FUN_004c554b(0);
      *(undefined4 *)(iVar1 + 0x40) = uVar3;
      FUN_004c2c30(uVar3,puStack_1c,0);
      *param_1 = *(undefined4 *)(iVar1 + 0x40);
      param_1[2] = 1;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[1] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      *puStack_1c = 0;
      iVar2 = FUN_005e21e0();
      if (iVar2 == 0) {
        if (*(void **)(iVar1 + 0x44) != (void *)0x0) {
          FID_conflict__free(*(void **)(iVar1 + 0x44));
        }
        uVar3 = FUN_004c554b(0);
        *(undefined4 *)(iVar1 + 0x44) = uVar3;
        FUN_004c2c30(uVar3,puStack_1c,0);
        *param_2 = *(undefined4 *)(iVar1 + 0x44);
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[1] = 0;
        param_2[5] = 0;
        param_2[6] = 1;
        param_2[7] = 0;
        *puStack_1c = 0;
        iVar2 = FUN_005e1fb0();
        if (iVar2 == 0) {
          if (*(void **)(iVar1 + 0x48) != (void *)0x0) {
            FID_conflict__free(*(void **)(iVar1 + 0x48));
          }
          uVar3 = FUN_004c554b(0);
          *(undefined4 *)(iVar1 + 0x48) = uVar3;
          FUN_004c2c30(uVar3,puStack_1c,0);
          *param_3 = *(undefined4 *)(iVar1 + 0x48);
          param_3[2] = 0;
          param_3[3] = 0;
          param_3[4] = 0;
          param_3[1] = 0;
          param_3[5] = 0;
          param_3[6] = 2;
          param_3[7] = 0;
          FID_conflict__free(puStack_1c);
          return 0;
        }
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  if (iVar1 != 0) {
    FID_conflict__free(puStack_1c);
    if (*(void **)(iVar1 + 0x40) != (void *)0x0) {
      FID_conflict__free(*(void **)(iVar1 + 0x40));
    }
    if (*(void **)(iVar1 + 0x44) != (void *)0x0) {
      FID_conflict__free(*(void **)(iVar1 + 0x44));
    }
    if (*(void **)(iVar1 + 0x48) != (void *)0x0) {
      FID_conflict__free(*(void **)(iVar1 + 0x48));
    }
    *(undefined4 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x44) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 0;
  }
  return local_c;
}

