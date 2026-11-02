// rea decompile_all
// name: FUN_0048f0ec
// address: 0x48f0ec
// body: available
// range: 0x48f0ec-0x48f498 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048f0ec(int param_1,int param_2,uint param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_8;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(uint *)(param_2 + 0xe8) & param_3 & 0x4000) != 0) {
      if (param_4 == -1) {
        local_8 = 0;
        if (0 < *(int *)(param_2 + 0x80)) {
          do {
            FUN_0048f0ec(param_1,param_2,0x4000,local_8);
            local_8 = local_8 + 1;
          } while (local_8 < *(int *)(param_2 + 0x80));
        }
        FUN_00491789(param_1,*(undefined4 *)(param_2 + 0x88));
        *(undefined4 *)(param_2 + 0x88) = 0;
        *(undefined4 *)(param_2 + 0x80) = 0;
      }
      else if (*(int *)(param_2 + 0x88) != 0) {
        iVar3 = *(int *)(param_4 * 0x1c + 4 + *(int *)(param_2 + 0x88));
        if (iVar3 != 0) {
          FUN_00491789(param_1,iVar3);
          *(undefined4 *)(param_4 * 0x1c + 4 + *(int *)(param_2 + 0x88)) = 0;
        }
      }
    }
    if ((*(uint *)(param_2 + 0xe8) & param_3 & 0x2000) != 0) {
      FUN_00491789(param_1,*(undefined4 *)(param_2 + 0x9c));
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffffef;
      *(undefined4 *)(param_2 + 0x9c) = 0;
    }
    if ((*(uint *)(param_2 + 0xe8) & param_3 & 0x100) != 0) {
      FUN_00491789(param_1,*(undefined4 *)(param_2 + 0x100));
      FUN_00491789(param_1,*(undefined4 *)(param_2 + 0x104));
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffbfff;
      *(undefined4 *)(param_2 + 0x100) = 0;
      *(undefined4 *)(param_2 + 0x104) = 0;
    }
    if ((char)((byte)*(undefined4 *)(param_2 + 0xe8) & (byte)param_3) < '\0') {
      FUN_00491789(param_1,*(undefined4 *)(param_2 + 0xd0));
      FUN_00491789(param_1,*(undefined4 *)(param_2 + 0xdc));
      iVar3 = *(int *)(param_2 + 0xe0);
      *(undefined4 *)(param_2 + 0xd0) = 0;
      *(undefined4 *)(param_2 + 0xdc) = 0;
      if (iVar3 != 0) {
        uVar2 = 0;
        if (*(char *)(param_2 + 0xe5) != '\0') {
          do {
            FUN_00491789(param_1,*(undefined4 *)(iVar3 + uVar2 * 4));
            iVar3 = *(int *)(param_2 + 0xe0);
            bVar1 = *(byte *)(param_2 + 0xe5);
            *(undefined4 *)(iVar3 + uVar2 * 4) = 0;
            uVar2 = uVar2 + 1;
          } while (uVar2 < bVar1);
        }
        FUN_00491789(param_1,*(undefined4 *)(param_2 + 0xe0));
        *(undefined4 *)(param_2 + 0xe0) = 0;
      }
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffbff;
    }
    if ((*(uint *)(param_2 + 0xe8) & param_3 & 0x10) != 0) {
      FUN_00491789(param_1,*(undefined4 *)(param_2 + 0x74));
      FUN_00491789(param_1,*(undefined4 *)(param_2 + 0x78));
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffefff;
      *(undefined4 *)(param_2 + 0x74) = 0;
      *(undefined4 *)(param_2 + 0x78) = 0;
    }
    if ((*(uint *)(param_2 + 0xe8) & param_3 & 0x20) != 0) {
      if (param_4 == -1) {
        if (*(int *)(param_2 + 0xf8) != 0) {
          iVar3 = 0;
          if (0 < *(int *)(param_2 + 0xf8)) {
            do {
              FUN_0048f0ec(param_1,param_2,0x20,iVar3);
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(param_2 + 0xf8));
          }
          FUN_00491789(param_1,*(undefined4 *)(param_2 + 0xf4));
          *(undefined4 *)(param_2 + 0xf4) = 0;
          *(undefined4 *)(param_2 + 0xf8) = 0;
        }
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffdfff;
      }
      else if (*(int *)(param_2 + 0xf4) != 0) {
        iVar3 = param_4 * 0x10;
        FUN_00491789(param_1,*(undefined4 *)(iVar3 + *(int *)(param_2 + 0xf4)));
        FUN_00491789(param_1,*(undefined4 *)(*(int *)(param_2 + 0xf4) + 8 + iVar3));
        puVar4 = (undefined4 *)(iVar3 + *(int *)(param_2 + 0xf4));
        *puVar4 = 0;
        puVar4[2] = 0;
      }
    }
    if ((*(uint *)(param_2 + 0xe8) & param_3 & 0x200) != 0) {
      if (param_4 == -1) {
        if (*(int *)(param_2 + 0xf0) != 0) {
          iVar3 = 0;
          if (0 < *(int *)(param_2 + 0xf0)) {
            do {
              FUN_0048f0ec(param_1,param_2,0x200,iVar3);
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(param_2 + 0xf0));
          }
          FUN_00491789(param_1,*(undefined4 *)(param_2 + 0xec));
          *(undefined4 *)(param_2 + 0xec) = 0;
          *(undefined4 *)(param_2 + 0xf0) = 0;
        }
      }
      else if (*(int *)(param_2 + 0xec) != 0) {
        FUN_00491789(param_1,*(undefined4 *)(param_4 * 0x14 + 8 + *(int *)(param_2 + 0xec)));
        *(undefined4 *)(param_4 * 0x14 + 8 + *(int *)(param_2 + 0xec)) = 0;
      }
    }
    if ((*(uint *)(param_2 + 0xe8) & param_3 & 8) != 0) {
      FUN_00491789(param_1,*(undefined4 *)(param_2 + 0xcc));
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffffbf;
      *(undefined4 *)(param_2 + 0xcc) = 0;
    }
    if ((*(uint *)(param_2 + 0xe8) & param_3 & 0x1000) != 0) {
      FUN_00491789(param_1,*(undefined4 *)(param_2 + 0x10));
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffff7;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined2 *)(param_2 + 0x14) = 0;
    }
    if ((*(uint *)(param_2 + 0xe8) & param_3 & 0x40) != 0) {
      iVar3 = *(int *)(param_2 + 0x108);
      if (iVar3 != 0) {
        uVar2 = 0;
        if (*(int *)(param_2 + 4) != 0) {
          do {
            FUN_00491789(param_1,*(undefined4 *)(iVar3 + uVar2 * 4));
            iVar3 = *(int *)(param_2 + 0x108);
            *(undefined4 *)(iVar3 + uVar2 * 4) = 0;
            uVar2 = uVar2 + 1;
          } while (uVar2 < *(uint *)(param_2 + 4));
        }
        FUN_00491789(param_1,*(undefined4 *)(param_2 + 0x108));
        *(undefined4 *)(param_2 + 0x108) = 0;
      }
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffff7fff;
    }
    if (param_4 != -1) {
      param_3 = param_3 & 0xffffbddf;
    }
    *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) & ~param_3;
  }
  return;
}

