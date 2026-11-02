// rea decompile_all
// name: FUN_00659160
// address: 0x659160
// body: available
// range: 0x659160-0x6595d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00659160(uint param_1,int param_2)

{
  byte bVar1;
  void *pvVar2;
  int in_ECX;
  int in_EDX;
  uint uVar3;
  int iVar4;
  
  if ((in_ECX != 0) && (in_EDX != 0)) {
    if ((*(uint *)(in_EDX + 0xe8) & param_1 & 0x4000) != 0) {
      if (param_2 == -1) {
        iVar4 = 0;
        if (0 < *(int *)(in_EDX + 0x80)) {
          do {
            FUN_00659160(0x4000,iVar4);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(in_EDX + 0x80));
        }
        if (*(void **)(in_EDX + 0x88) != (void *)0x0) {
          FID_conflict__free(*(void **)(in_EDX + 0x88));
        }
        *(undefined4 *)(in_EDX + 0x88) = 0;
        *(undefined4 *)(in_EDX + 0x80) = 0;
      }
      else if ((*(int *)(in_EDX + 0x88) != 0) &&
              (pvVar2 = *(void **)(*(int *)(in_EDX + 0x88) + 4 + param_2 * 0x1c),
              pvVar2 != (void *)0x0)) {
        FID_conflict__free(pvVar2);
        *(undefined4 *)(*(int *)(in_EDX + 0x88) + 4 + param_2 * 0x1c) = 0;
      }
    }
    if ((*(uint *)(in_EDX + 0xe8) & param_1 & 0x2000) != 0) {
      if (*(void **)(in_EDX + 0x9c) != (void *)0x0) {
        FID_conflict__free(*(void **)(in_EDX + 0x9c));
      }
      *(uint *)(in_EDX + 8) = *(uint *)(in_EDX + 8) & 0xffffffef;
      *(undefined4 *)(in_EDX + 0x9c) = 0;
    }
    if ((*(uint *)(in_EDX + 0xe8) & param_1 & 0x100) != 0) {
      if (*(void **)(in_EDX + 0x100) != (void *)0x0) {
        FID_conflict__free(*(void **)(in_EDX + 0x100));
      }
      if (*(void **)(in_EDX + 0x104) != (void *)0x0) {
        FID_conflict__free(*(void **)(in_EDX + 0x104));
      }
      *(uint *)(in_EDX + 8) = *(uint *)(in_EDX + 8) & 0xffffbfff;
      *(undefined4 *)(in_EDX + 0x100) = 0;
      *(undefined4 *)(in_EDX + 0x104) = 0;
    }
    if ((char)((byte)*(undefined4 *)(in_EDX + 0xe8) & (byte)param_1) < '\0') {
      if (*(void **)(in_EDX + 0xd0) != (void *)0x0) {
        FID_conflict__free(*(void **)(in_EDX + 0xd0));
      }
      if (*(void **)(in_EDX + 0xdc) != (void *)0x0) {
        FID_conflict__free(*(void **)(in_EDX + 0xdc));
      }
      iVar4 = *(int *)(in_EDX + 0xe0);
      *(undefined4 *)(in_EDX + 0xd0) = 0;
      *(undefined4 *)(in_EDX + 0xdc) = 0;
      if (iVar4 != 0) {
        uVar3 = 0;
        if (*(char *)(in_EDX + 0xe5) != '\0') {
          do {
            pvVar2 = *(void **)(iVar4 + uVar3 * 4);
            if (pvVar2 != (void *)0x0) {
              FID_conflict__free(pvVar2);
            }
            iVar4 = *(int *)(in_EDX + 0xe0);
            bVar1 = *(byte *)(in_EDX + 0xe5);
            *(undefined4 *)(iVar4 + uVar3 * 4) = 0;
            uVar3 = uVar3 + 1;
          } while (uVar3 < bVar1);
        }
        if (*(void **)(in_EDX + 0xe0) != (void *)0x0) {
          FID_conflict__free(*(void **)(in_EDX + 0xe0));
        }
        *(undefined4 *)(in_EDX + 0xe0) = 0;
      }
      *(uint *)(in_EDX + 8) = *(uint *)(in_EDX + 8) & 0xfffffbff;
    }
    if ((*(uint *)(in_EDX + 0xe8) & param_1 & 0x10) != 0) {
      if (*(void **)(in_EDX + 0x74) != (void *)0x0) {
        FID_conflict__free(*(void **)(in_EDX + 0x74));
      }
      if (*(void **)(in_EDX + 0x78) != (void *)0x0) {
        FID_conflict__free(*(void **)(in_EDX + 0x78));
      }
      *(uint *)(in_EDX + 8) = *(uint *)(in_EDX + 8) & 0xffffefff;
      *(undefined4 *)(in_EDX + 0x74) = 0;
      *(undefined4 *)(in_EDX + 0x78) = 0;
    }
    if ((*(uint *)(in_EDX + 0xe8) & param_1 & 0x20) != 0) {
      if (param_2 == -1) {
        if (*(int *)(in_EDX + 0xf8) != 0) {
          iVar4 = 0;
          if (0 < *(int *)(in_EDX + 0xf8)) {
            do {
              FUN_00659160(0x20,iVar4);
              iVar4 = iVar4 + 1;
            } while (iVar4 < *(int *)(in_EDX + 0xf8));
          }
          if (*(void **)(in_EDX + 0xf4) != (void *)0x0) {
            FID_conflict__free(*(void **)(in_EDX + 0xf4));
          }
          *(undefined4 *)(in_EDX + 0xf4) = 0;
          *(undefined4 *)(in_EDX + 0xf8) = 0;
        }
        *(uint *)(in_EDX + 8) = *(uint *)(in_EDX + 8) & 0xffffdfff;
      }
      else if (*(int *)(in_EDX + 0xf4) != 0) {
        pvVar2 = *(void **)(*(int *)(in_EDX + 0xf4) + param_2 * 0x10);
        if (pvVar2 != (void *)0x0) {
          FID_conflict__free(pvVar2);
        }
        pvVar2 = *(void **)(*(int *)(in_EDX + 0xf4) + 8 + param_2 * 0x10);
        if (pvVar2 != (void *)0x0) {
          FID_conflict__free(pvVar2);
        }
        iVar4 = *(int *)(in_EDX + 0xf4);
        *(undefined4 *)(iVar4 + param_2 * 0x10) = 0;
        *(undefined4 *)(iVar4 + 8 + param_2 * 0x10) = 0;
      }
    }
    if ((*(uint *)(in_EDX + 0xe8) & param_1 & 0x200) != 0) {
      if (param_2 == -1) {
        if (*(int *)(in_EDX + 0xf0) != 0) {
          iVar4 = 0;
          if (0 < *(int *)(in_EDX + 0xf0)) {
            do {
              FUN_00659160(0x200,iVar4);
              iVar4 = iVar4 + 1;
            } while (iVar4 < *(int *)(in_EDX + 0xf0));
          }
          if (*(void **)(in_EDX + 0xec) != (void *)0x0) {
            FID_conflict__free(*(void **)(in_EDX + 0xec));
          }
          *(undefined4 *)(in_EDX + 0xec) = 0;
          *(undefined4 *)(in_EDX + 0xf0) = 0;
        }
      }
      else if (*(int *)(in_EDX + 0xec) != 0) {
        pvVar2 = *(void **)(*(int *)(in_EDX + 0xec) + 8 + param_2 * 0x14);
        if (pvVar2 != (void *)0x0) {
          FID_conflict__free(pvVar2);
        }
        *(undefined4 *)(*(int *)(in_EDX + 0xec) + 8 + param_2 * 0x14) = 0;
      }
    }
    if ((*(uint *)(in_EDX + 0xe8) & param_1 & 8) != 0) {
      if (*(void **)(in_EDX + 0xcc) != (void *)0x0) {
        FID_conflict__free(*(void **)(in_EDX + 0xcc));
      }
      *(uint *)(in_EDX + 8) = *(uint *)(in_EDX + 8) & 0xffffffbf;
      *(undefined4 *)(in_EDX + 0xcc) = 0;
    }
    if ((*(uint *)(in_EDX + 0xe8) & param_1 & 0x1000) != 0) {
      if (*(void **)(in_EDX + 0x10) != (void *)0x0) {
        FID_conflict__free(*(void **)(in_EDX + 0x10));
      }
      *(uint *)(in_EDX + 8) = *(uint *)(in_EDX + 8) & 0xfffffff7;
      *(undefined4 *)(in_EDX + 0x10) = 0;
      *(undefined2 *)(in_EDX + 0x14) = 0;
    }
    if ((*(uint *)(in_EDX + 0xe8) & param_1 & 0x40) != 0) {
      iVar4 = *(int *)(in_EDX + 0x108);
      if (iVar4 != 0) {
        uVar3 = 0;
        if (*(int *)(in_EDX + 4) != 0) {
          do {
            pvVar2 = *(void **)(iVar4 + uVar3 * 4);
            if (pvVar2 != (void *)0x0) {
              FID_conflict__free(pvVar2);
            }
            iVar4 = *(int *)(in_EDX + 0x108);
            *(undefined4 *)(iVar4 + uVar3 * 4) = 0;
            uVar3 = uVar3 + 1;
          } while (uVar3 < *(uint *)(in_EDX + 4));
        }
        if (*(void **)(in_EDX + 0x108) != (void *)0x0) {
          FID_conflict__free(*(void **)(in_EDX + 0x108));
        }
        *(undefined4 *)(in_EDX + 0x108) = 0;
      }
      *(uint *)(in_EDX + 8) = *(uint *)(in_EDX + 8) & 0xffff7fff;
    }
    uVar3 = param_1 & 0xffffbddf;
    if (param_2 == -1) {
      uVar3 = param_1;
    }
    *(uint *)(in_EDX + 0xe8) = *(uint *)(in_EDX + 0xe8) & ~uVar3;
  }
  return;
}

