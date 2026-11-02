// rea decompile_all
// name: FUN_001290ec
// address: 0x1290ec
// body: available
// range: 0x125594-0x1255eb inclusive
// range: 0x1290ec-0x129147 inclusive
// range: 0x12b1e4-0x12b2a3 inclusive
// range: 0x141bc0-0x141d0f inclusive
// range: 0x141f2c-0x141f3b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x12b22c to 0x142e84 FUN_00142e84 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */

void FUN_001290ec(int param_1,uint param_2,int *param_3)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int extraout_r3;
  undefined4 *puVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [52];
  
  iVar4 = FUN_0010ed7c(param_2);
  if (iVar4 != 4) {
    if (iVar4 == 5) {
      piVar3 = *(int **)(param_1 + 0x9c);
      if (*(int **)(param_1 + 0x9c) == (int *)0x0) {
        return;
      }
      do {
        uVar5 = (uint)*(ushort *)(piVar3 + 0x3a);
        bVar11 = param_2 < uVar5;
        bVar10 = param_2 == uVar5;
        if (!bVar11 && !bVar10) {
          uVar5 = 1;
        }
        if (bVar11) {
          uVar5 = 0;
        }
        if (bVar10) {
          if (piVar3 == (int *)0x0) {
            return;
          }
          FUN_001179e0();
          FUN_0010f6a4(auStack_68,param_3 + 7);
          iVar4 = FUN_0012e3a4(piVar3 + 0x1a,auStack_68);
          if (iVar4 == 0) {
            FUN_001179d0(piVar3);
          }
          else {
            FUN_0010f6a4(auStack_78,param_3 + 7);
            iVar4 = FUN_00132ec8(piVar3 + 0x15,auStack_78,auStack_48);
            FUN_001179d0(piVar3);
            if (iVar4 != 0) {
              *(undefined1 *)((int)piVar3 + 0xeb) = 1;
              uVar5 = 0;
              while ((uVar5 < *(ushort *)(piVar3 + 0x23) &&
                     (puVar8 = *(undefined4 **)(piVar3[0x22] + uVar5 * 4),
                     puVar8 != (undefined4 *)0x0))) {
                FUN_0010f6a4(auStack_58,param_3 + 7);
                (**(code **)*puVar8)(puVar8,*(int *)(*piVar3 + -0x14) + (int)piVar3,auStack_58,1);
                uVar5 = uVar5 + 1 & 0xfffeffff;
              }
            }
          }
          iVar4 = *param_3;
          if (iVar4 == 0) {
            return;
          }
          do {
            iVar6 = piVar3[9];
            uVar5 = *(uint *)(iVar6 + 0x5e8);
            if (iVar4 == 0) {
              iVar9 = *param_3;
            }
            else {
              iVar9 = *(int *)(iVar4 + 0xc);
            }
            *(uint *)(iVar6 + 0x5ec) = *(int *)(iVar6 + 0x5ec) + (uint)(0xfffffffe < uVar5);
            *(uint *)(iVar6 + 0x5e8) = uVar5 + 1;
            switch(*(uint *)(iVar4 + 0x10) & 0x3f) {
            case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            iVar4 = iVar9;
          } while (iVar9 != 0);
          return;
        }
        puVar1 = (uint *)(piVar3 + uVar5 + 0x10);
        if ((int *)*puVar1 == (int *)0x0) {
          return;
        }
        if (uVar5 != 0) {
          piVar3 = (int *)(uint)*(byte *)(piVar3 + 0x12);
        }
        uVar7 = (uint)piVar3 & 0x80;
        piVar3 = (int *)*puVar1;
      } while (uVar5 == 0 || uVar7 == 0);
      return;
    }
    if (iVar4 != 0x7f02) {
      return;
    }
  }
  uVar5 = *(uint *)(param_1 + 0x94);
  if (param_2 != 0xffff) {
    iVar4 = extraout_r3;
    if (uVar5 == 0) {
      return;
    }
    do {
      uVar7 = (uint)*(ushort *)(uVar5 + 0x90);
      if (param_2 >= uVar7 && param_2 != uVar7) {
        iVar4 = 1;
      }
      if (param_2 < uVar7) {
        iVar4 = 0;
      }
      if (param_2 == uVar7) {
        if (uVar5 != 0) {
          FUN_00142e84(uVar5,param_3);
          return;
        }
        return;
      }
      uVar7 = *(uint *)(uVar5 + iVar4 * 4 + 0x104);
      if (uVar7 == 0) {
        return;
      }
      if (iVar4 != 0) {
        uVar5 = (uint)*(byte *)(uVar5 + 0x10c);
      }
      uVar2 = uVar5 & 0x80;
      uVar5 = uVar7;
    } while (iVar4 == 0 || uVar2 == 0);
    return;
  }
  if (uVar5 == 0) {
    return;
  }
  for (uVar7 = *(uint *)(uVar5 + 0x104); uVar7 != 0; uVar7 = *(uint *)(uVar7 + 0x104)) {
    uVar5 = uVar7;
  }
  if (uVar5 != 0) {
    do {
      FUN_00142e84(uVar5,param_3);
      uVar5 = FUN_001d7aac(param_1 + 0x90,uVar5);
    } while (uVar5 != 0);
    return;
  }
  return;
}

