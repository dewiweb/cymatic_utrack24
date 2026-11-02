// rea decompile_all
// name: FUN_0060bdc0
// address: 0x60bdc0
// body: available
// range: 0x60bdc0-0x60c011 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060bdc0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  
  iVar4 = *(int *)(in_ECX + 0xdc);
  if (iVar4 == 0) {
    iVar4 = in_ECX + 0xe0;
  }
  iVar3 = *(int *)(in_ECX + 0xf4) >> 5;
  while( true ) {
    if (iVar3 < 0) goto LAB_0060bebd;
    uVar5 = *(uint *)(iVar4 + iVar3 * 4);
    if (uVar5 != 0) break;
    iVar3 = iVar3 + -1;
  }
  iVar4 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  if (-1 < iVar3 * 0x20 + iVar4) {
    iVar4 = 0x7f;
    uVar5 = 0x80000000;
    do {
      if ((iVar4 <= *(int *)(in_ECX + 0xf4)) && (-1 < iVar4)) {
        iVar3 = *(int *)(in_ECX + 0xdc);
        if (iVar3 == 0) {
          iVar3 = in_ECX + 0xe0;
        }
        if ((*(uint *)(iVar3 + (iVar4 >> 5) * 4) & uVar5) != 0) {
          FUN_005c5890(*(undefined4 *)(in_ECX + 0xb8),iVar4);
        }
      }
      uVar5 = uVar5 >> 1 | (uint)((uVar5 & 1) != 0) << 0x1f;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    FID_conflict__free(*(void **)(in_ECX + 0xdc));
    *(undefined4 *)(in_ECX + 0xdc) = 0;
    *(undefined4 *)(in_ECX + 0xf0) = 4;
    *(undefined4 *)(in_ECX + 0xf4) = 0xffffffff;
    *(undefined1 *)(in_ECX + 0xf8) = 0;
    *(undefined4 *)(in_ECX + 0xe0) = 0;
    *(undefined4 *)(in_ECX + 0xe4) = 0;
    *(undefined4 *)(in_ECX + 0xe8) = 0;
    *(undefined4 *)(in_ECX + 0xec) = 0;
  }
LAB_0060bebd:
  uVar5 = *(uint *)(in_ECX + 0xd8);
  while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
    piVar6 = (int *)(in_ECX + 0xd0);
    iVar4 = *(int *)(*piVar6 + uVar5 * 4);
    if (-1 < iVar4) {
      FUN_005c5890(*(undefined4 *)(in_ECX + 0xb8),iVar4);
      uVar7 = *(uint *)(in_ECX + 0xd8);
      if (uVar5 < uVar7) {
        *(undefined4 *)(*piVar6 + uVar5 * 4) = 0xffffffff;
      }
      else if (-1 < (int)uVar5) {
        iVar4 = uVar7 + 1;
        if (*(int *)(in_ECX + 0xd4) < iVar4) {
          if (iVar4 < 0) {
            iVar4 = uVar7 + 2;
          }
          FUN_00409cf0((iVar4 >> 1) + uVar7 + 9 & 0xfffffff8);
        }
        iVar4 = *(int *)(in_ECX + 0xd8);
        *(int *)(in_ECX + 0xd8) = iVar4 + 1;
        puVar1 = (undefined4 *)(*piVar6 + iVar4 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0xffffffff;
        }
      }
    }
    uVar7 = *(uint *)(in_ECX + 0xcc);
    if (uVar5 < uVar7) {
      *(undefined4 *)(*(int *)(in_ECX + 0xc4) + uVar5 * 4) = 0xffffffff;
    }
    else if (-1 < (int)uVar5) {
      iVar4 = uVar7 + 1;
      if ((int)*(uint *)(in_ECX + 200) < iVar4) {
        if (iVar4 < 0) {
          iVar4 = uVar7 + 2;
        }
        uVar7 = uVar7 + 9 + (iVar4 >> 1) & 0xfffffff8;
        if (*(uint *)(in_ECX + 200) != uVar7) {
          if ((int)uVar7 < 1) {
            FID_conflict__free(*(void **)(in_ECX + 0xc4));
            *(undefined4 *)(in_ECX + 0xc4) = 0;
          }
          else if (*(int *)(in_ECX + 0xc4) == 0) {
            uVar2 = FUN_004c554b();
            *(undefined4 *)(in_ECX + 0xc4) = uVar2;
          }
          else {
            uVar2 = FUN_004c553b(*(int *)(in_ECX + 0xc4),uVar7 * 4);
            *(undefined4 *)(in_ECX + 0xc4) = uVar2;
          }
          *(uint *)(in_ECX + 200) = uVar7;
        }
      }
      iVar4 = *(int *)(in_ECX + 0xcc);
      *(int *)(in_ECX + 0xcc) = iVar4 + 1;
      puVar1 = (undefined4 *)(*(int *)(in_ECX + 0xc4) + iVar4 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0xffffffff;
      }
    }
  }
  return;
}

