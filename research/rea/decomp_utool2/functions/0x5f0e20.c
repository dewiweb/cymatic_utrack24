// rea decompile_all
// name: FUN_005f0e20
// address: 0x5f0e20
// body: available
// range: 0x5f0e20-0x5f1099 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f0e20(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  int *in_ECX;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_8;
  
  if (*(void **)(*in_ECX + 600) != (void *)0x0) {
    FID_conflict__free(*(void **)(*in_ECX + 600));
    *(undefined4 *)(*in_ECX + 600) = 0;
    *(undefined4 *)(*in_ECX + 0x25c) = 0;
  }
  uVar3 = 0;
  if (*(int *)(*in_ECX + 0x18) != 0) {
    iVar5 = 0x1cc0;
    do {
      pvVar1 = *(void **)(iVar5 + -0x28 + in_ECX[1]);
      if (pvVar1 != (void *)0x0) {
        FID_conflict__free(pvVar1);
        *(undefined4 *)(iVar5 + -0x28 + in_ECX[1]) = 0;
      }
      if (*(void **)(iVar5 + in_ECX[1]) != (void *)0x0) {
        FID_conflict__free(*(void **)(iVar5 + in_ECX[1]));
        *(undefined4 *)(iVar5 + in_ECX[1]) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar3 < *(uint *)(*in_ECX + 0x18));
  }
  uVar3 = 0x1ce0;
  do {
    pvVar1 = *(void **)((uVar3 - 0x28) + in_ECX[1]);
    if (pvVar1 != (void *)0x0) {
      FID_conflict__free(pvVar1);
      *(undefined4 *)((uVar3 - 0x28) + in_ECX[1]) = 0;
    }
    if (*(void **)(uVar3 + in_ECX[1]) != (void *)0x0) {
      FID_conflict__free(*(void **)(uVar3 + in_ECX[1]));
      *(undefined4 *)(uVar3 + in_ECX[1]) = 0;
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x1ce8);
  uVar3 = 0;
  if (*(int *)(*in_ECX + 0x28) != 0) {
    iVar5 = 0x1ce8;
    do {
      if (*(void **)(iVar5 + in_ECX[1]) != (void *)0x0) {
        FID_conflict__free(*(void **)(iVar5 + in_ECX[1]));
        *(undefined4 *)(iVar5 + in_ECX[1]) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar3 < *(uint *)(*in_ECX + 0x28));
  }
  if (*(void **)(in_ECX[1] + 0x1d68) != (void *)0x0) {
    FID_conflict__free(*(void **)(in_ECX[1] + 0x1d68));
    *(undefined4 *)(in_ECX[1] + 0x1d68) = 0;
  }
  local_8 = 0;
  if (*(int *)(*in_ECX + 0x18) != 0) {
    iVar5 = 0x1d6c;
    do {
      iVar4 = 2;
      do {
        if (*(void **)(iVar5 + in_ECX[1]) != (void *)0x0) {
          FID_conflict__free(*(void **)(iVar5 + in_ECX[1]));
          *(undefined4 *)(iVar5 + in_ECX[1]) = 0;
        }
        iVar5 = iVar5 + 4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)(*in_ECX + 0x18));
  }
  uVar3 = 0x1dac;
  do {
    iVar5 = 2;
    do {
      if (*(void **)(uVar3 + in_ECX[1]) != (void *)0x0) {
        FID_conflict__free(*(void **)(uVar3 + in_ECX[1]));
        *(undefined4 *)(uVar3 + in_ECX[1]) = 0;
      }
      uVar3 = uVar3 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  } while (uVar3 < 0x1dbc);
  if (*(void **)(in_ECX[1] + 0x1dbc) != (void *)0x0) {
    FID_conflict__free(*(void **)(in_ECX[1] + 0x1dbc));
    *(undefined4 *)(in_ECX[1] + 0x1dbc) = 0;
  }
  if (*(void **)(in_ECX[1] + 0x1dc0) != (void *)0x0) {
    FID_conflict__free(*(void **)(in_ECX[1] + 0x1dc0));
    *(undefined4 *)(in_ECX[1] + 0x1dc0) = 0;
  }
  if ((*(int *)(*in_ECX + 4) != 0) && (uVar3 = 0, *(int *)(*in_ECX + 0x18) != 0)) {
    iVar5 = 0x2dec;
    do {
      if (*(void **)(iVar5 + in_ECX[1]) != (void *)0x0) {
        FID_conflict__free(*(void **)(iVar5 + in_ECX[1]));
        *(undefined4 *)(iVar5 + in_ECX[1]) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar3 < *(uint *)(*in_ECX + 0x18));
  }
  puVar2 = *(undefined4 **)(in_ECX[1] + 0x1ac8);
  if ((void *)*puVar2 != (void *)0x0) {
    FID_conflict__free((void *)*puVar2);
  }
  *puVar2 = 0;
  puVar2[2] = 0;
  puVar2[4] = 0;
  puVar2[3] = 0;
  return;
}

