// rea decompile_all
// name: FUN_00102758
// address: 0x102758
// body: available
// range: 0x102758-0x10280f inclusive
// range: 0x10334c-0x103627 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x103624 to 0x16d758 FUN_0016d758 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00102758(int param_1)

{
  byte *pbVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 unaff_r4;
  int *piVar8;
  undefined4 unaff_r5;
  undefined4 *puVar9;
  undefined4 unaff_r6;
  uint uVar10;
  undefined4 unaff_r7;
  
  FUN_001a0700(param_1 + 0x158);
  while (*(int *)(param_1 + 0x7c) != 0) {
    piVar3 = *(int **)(param_1 + 0x74);
    piVar8 = (int *)0x0;
    if (piVar3 != (int *)0x0) {
      iVar7 = piVar3[2];
      *(int *)(param_1 + 0x74) = iVar7;
      if (iVar7 == 0) {
        *(undefined4 *)(param_1 + 0x78) = 0;
      }
      else {
        *(undefined4 *)(iVar7 + 4) = 0;
      }
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
      piVar3[1] = 0;
      piVar3[2] = 0;
      piVar8 = piVar3;
    }
    FUN_001a0d18(param_1 + 0x158);
    if (piVar8 != (int *)0x0) {
      FUN_00103100(param_1,0,piVar8 + 3,piVar8[6],piVar8[7]);
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    FUN_001a0700(param_1 + 0x158);
  }
  FUN_001a0d18(param_1 + 0x158);
  bVar2 = false;
  FUN_001a0700(param_1 + 0x9c);
  piVar8 = *(int **)(param_1 + 0x84);
  if (piVar8 != (int *)0x0) {
    for (piVar3 = (int *)*piVar8; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
      piVar8 = piVar3;
    }
    while (piVar8 != (int *)0x0) {
      if (piVar8[8] != 0) {
        uVar4 = FUN_0017bfc0();
        if (*(char *)((int)piVar8 + 0x4a) != '\0') {
          if (uVar4 < piVar8[0x11] + 1000U) goto LAB_00103520;
          *(undefined1 *)((int)piVar8 + 0x4a) = 0;
        }
        puVar9 = (undefined4 *)piVar8[8];
        uVar5 = (uint)*(byte *)(puVar9 + 0x17);
        if (uVar5 == 0) {
LAB_001034a4:
          uVar10 = 0;
          do {
            if (puVar9 != (undefined4 *)0x0) {
              uVar5 = (uint)*(ushort *)(piVar8 + 0x12);
            }
            if (puVar9 == (undefined4 *)0x0 || uVar5 <= uVar10) goto LAB_00103520;
            if (*(char *)(puVar9 + 0x17) == '\0') {
              *(undefined1 *)(puVar9 + 0x17) = 1;
              puVar9[0x18] = uVar4;
              if (*(char *)((int)piVar8 + 0x4b) == '\0') {
                uVar6 = 0x400;
              }
              else {
                uVar6 = 0xc00;
              }
              iVar7 = FUN_00103100(*(undefined4 *)(piVar8[3] + 0x44),puVar9,piVar8 + 4,puVar9[0x15],
                                   uVar6,unaff_r4,unaff_r5,unaff_r6,unaff_r7);
              if (iVar7 == 0) {
                *(undefined1 *)((int)puVar9 + 0x5b) = 1;
                goto LAB_00103520;
              }
              *(undefined1 *)((int)piVar8 + 0x4b) = 0;
              piVar8[0xc] = piVar8[0xc] + 1;
            }
            puVar9 = (undefined4 *)*puVar9;
            uVar5 = uVar10 + 1;
            uVar10 = uVar5 & 0xfffeffff;
          } while( true );
        }
        if (*(char *)((int)puVar9 + 0x5b) == '\0') {
          if (uVar4 - puVar9[0x18] < 0x1f5) goto LAB_001034a4;
          if (3 < uVar5) goto LAB_00103424;
        }
        else {
          if (uVar4 - puVar9[0x18] <= (uint)(2 << uVar5)) goto LAB_001034a4;
          if (9 < uVar5) {
LAB_00103424:
            *(int *)(*(int *)(piVar8[3] + 0x44) + 0xd84) =
                 piVar8[0xe] + *(int *)(*(int *)(piVar8[3] + 0x44) + 0xd84);
            FUN_00103e20(piVar8);
            bVar2 = true;
            break;
          }
        }
        *(byte *)(puVar9 + 0x17) = *(byte *)(puVar9 + 0x17) + 1;
        *(uint *)(piVar8[8] + 0x60) = uVar4;
        iVar7 = FUN_00103100(*(undefined4 *)(piVar8[3] + 0x44),piVar8[8],piVar8 + 4,
                             *(undefined4 *)(piVar8[8] + 0x54),0x400,unaff_r4,unaff_r5,unaff_r6,
                             unaff_r7);
        if (iVar7 == 0) {
          *(undefined1 *)(piVar8[8] + 0x5b) = 1;
        }
        else {
          piVar8[0xc] = piVar8[0xc] + 1;
          *(undefined1 *)(piVar8[8] + 0x5b) = 0;
        }
      }
LAB_00103520:
      if (piVar8 == (int *)0x0) {
        piVar3 = *(int **)(param_1 + 0x84);
        if (piVar3 == (int *)0x0) break;
        piVar8 = piVar3;
        for (piVar3 = (int *)*piVar3; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
          piVar8 = piVar3;
        }
      }
      else {
        pbVar1 = (byte *)(piVar8 + 2);
        piVar8 = (int *)piVar8[1];
        piVar3 = piVar8;
        if ((*pbVar1 & 0x80) == 0) {
          do {
            piVar8 = piVar3;
            if (piVar8 == (int *)0x0) goto LAB_00103594;
            piVar3 = (int *)*piVar8;
          } while ((int *)*piVar8 != (int *)0x0);
        }
      }
    }
  }
LAB_00103594:
  FUN_001a0d18(param_1 + 0x9c);
  if (!bVar2) {
    return;
  }
  if ((char)piVar8[0x15] != '\0') {
    (**(code **)(**(int **)(param_1 + 200) + 8))(*(int **)(param_1 + 200),0,piVar8 + 4,1);
    FUN_00023d38(param_1 + 0xcc);
  }
  FUN_001a0700(param_1 + 0x9c);
  FUN_001bec44(param_1 + 0x80,piVar8 + 4);
  FUN_001a0d18(param_1 + 0x9c);
  (**(code **)(**(int **)(param_1 + 200) + 4))(*(int **)(param_1 + 200),piVar8 + 4);
  if (piVar8 != (int *)0x0) {
    FUN_00103e20(piVar8);
    iVar7 = FUN_000ea314(piVar8 + 4);
    FUN_0016d758(iVar7 + -0x10);
    return;
  }
  return;
}

