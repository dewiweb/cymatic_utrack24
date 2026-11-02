// rea decompile_all
// name: FUN_0011b2ac
// address: 0x11b2ac
// body: available
// range: 0x11b2ac-0x11b643 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0011b2ac(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  int *piVar12;
  bool bVar13;
  uint in_stack_ffffff78;
  undefined2 uVar14;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined4 local_58;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  
  iStack_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x88))
            (*(int **)(param_1 + 0xc),param_3,*(undefined2 *)(param_1 + 0x1c));
  iVar11 = 0;
  if (0 < local_28) {
    local_44 = 8;
    local_3c = 3;
    local_40 = 0xc;
    local_48 = 9;
    local_58 = 0;
    do {
      psVar10 = (short *)(param_5 + iVar11 * 0xc);
      sVar1 = *psVar10;
      if (sVar1 == 1) {
        FUN_0010e7e0(auStack_68);
        FUN_0010e7e0(auStack_60);
        uVar6 = 0;
        while( true ) {
          uVar4 = DAT_0011b644;
          piVar12 = *(int **)(param_1 + 0x20);
          if ((*(ushort *)(piVar12 + 0x5b) <= uVar6) ||
             (puVar3 = *(undefined4 **)(piVar12[0x5a] + uVar6 * 4), puVar3 == (undefined4 *)0x0))
          break;
          if (piVar12 != (int *)0x0) {
            piVar12 = (int *)((int)piVar12 + *(int *)(*piVar12 + -0x18));
          }
          (**(code **)*puVar3)(puVar3,piVar12,0,psVar10[1],0,auStack_68);
          uVar6 = uVar6 + 1 & 0xfffeffff;
        }
        uVar6 = 0;
        while( true ) {
          uVar2 = local_3c;
          piVar12 = *(int **)(param_1 + 0x20);
          if ((*(ushort *)(piVar12 + 0x5b) <= uVar6) ||
             (puVar3 = *(undefined4 **)(piVar12[0x5a] + uVar6 * 4), puVar3 == (undefined4 *)0x0))
          break;
          if (piVar12 != (int *)0x0) {
            piVar12 = (int *)((int)piVar12 + *(int *)(*piVar12 + -0x18));
          }
          (**(code **)*puVar3)(puVar3,piVar12,0,psVar10[1],uVar4,auStack_60);
          uVar6 = uVar6 + 1 & 0xfffeffff;
        }
        piVar12 = *(int **)(param_1 + 0xc);
        sVar1 = psVar10[2];
        uVar4 = FUN_0015e89c(auStack_60);
        uVar5 = FUN_0015e89c(auStack_68);
        in_stack_ffffff78 = 0;
        piVar12 = (int *)(**(code **)(*piVar12 + 0x7c))
                                   (piVar12,*(undefined4 *)(psVar10 + 4),psVar10[1],0,0x8000,uVar5,0
                                    ,uVar4,0,*(undefined2 *)(param_1 + 0x1c),sVar1,(short)uVar2);
        FUN_0010e7f4(auStack_60);
        FUN_0010e7f4(auStack_68);
LAB_0011b5b0:
        if (piVar12 != (int *)0x0) {
          (**(code **)(*(int *)((int)piVar12 + *(int *)(*piVar12 + -0x38)) + 4))
                    (*(int *)(*piVar12 + -0x38) + (int)piVar12,param_1 + 4);
          puVar7 = (undefined2 *)FUN_0016d7a4(0x14,DAT_0011b648);
          if (puVar7 == (undefined2 *)0x0) {
            iVar9 = 0;
          }
          else {
            *puVar7 = (short)local_58;
            puVar7[1] = 0;
            iVar8 = FUN_0010e7e0(puVar7 + 2);
            *(undefined4 *)(iVar8 + 8) = 0;
            iVar9 = iVar8 + -4;
            *(undefined2 *)(iVar8 + 0xc) = 0;
          }
          (**(code **)(*(int *)((int)piVar12 + *(int *)(*piVar12 + -0x38)) + 0x14))
                    (*(int *)(*piVar12 + -0x38) + (int)piVar12,iVar9);
        }
      }
      else {
        uVar14 = (undefined2)(in_stack_ffffff78 >> 0x10);
        if (sVar1 == 2) {
          piVar12 = *(int **)(param_1 + 0xc);
          if (psVar10[1] == 0x500) {
            in_stack_ffffff78 = CONCAT22(uVar14,psVar10[2]) | 0x400;
            piVar12 = (int *)(**(code **)(*piVar12 + 0x80))
                                       (piVar12,*(undefined4 *)(psVar10 + 4),psVar10[1],0,
                                        *(undefined4 *)(param_1 + 0x14),
                                        *(undefined2 *)(param_1 + 0x1c),in_stack_ffffff78,
                                        local_48 & 0xffff);
          }
          else {
            in_stack_ffffff78 = CONCAT22(uVar14,psVar10[2]);
            piVar12 = (int *)(**(code **)(*piVar12 + 0x80))
                                       (piVar12,*(undefined4 *)(psVar10 + 4),psVar10[1],0,
                                        *(undefined4 *)(param_1 + 0x18),
                                        *(undefined2 *)(param_1 + 0x1c),in_stack_ffffff78,
                                        local_48 & 0xffff);
          }
          goto LAB_0011b5b0;
        }
        if (sVar1 == 4) {
          uVar6 = (uint)(ushort)psVar10[1];
          piVar12 = *(int **)(param_1 + 0xc);
          bVar13 = uVar6 == 0x500;
          if (!bVar13) {
            uVar6 = uVar6 + 0xff;
          }
          if (bVar13 || uVar6 == 0x600) {
            in_stack_ffffff78 = CONCAT22(uVar14,(short)local_40);
            piVar12 = (int *)(**(code **)(*piVar12 + 0x84))
                                       (piVar12,*(undefined4 *)(psVar10 + 4),psVar10[1],0,
                                        *(undefined2 *)(param_1 + 0x1c),psVar10[2],in_stack_ffffff78
                                       );
          }
          else {
            in_stack_ffffff78 = CONCAT22(uVar14,(short)local_44);
            piVar12 = (int *)(**(code **)(*piVar12 + 0x84))
                                       (piVar12,*(undefined4 *)(psVar10 + 4),psVar10[1],0,
                                        *(undefined2 *)(param_1 + 0x1c),psVar10[2],in_stack_ffffff78
                                       );
          }
          goto LAB_0011b5b0;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < local_28);
  }
  *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + 1;
  return;
}

