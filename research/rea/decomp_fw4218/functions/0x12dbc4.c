// rea decompile_all
// name: FUN_0012dbc4
// address: 0x12dbc4
// body: available
// range: 0x12dbc4-0x12dd25 inclusive
// range: 0x12dd28-0x12dd39 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0012dbc4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint local_70;
  int local_68 [4];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  int *local_28 [2];
  int iStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iStack_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  FUN_001b3d0c(auStack_38,param_2,0);
  uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xc))();
  iVar2 = FUN_001c0b0c(auStack_38,uVar1);
  FUN_001aafac(auStack_38);
  if (iVar2 != 1) {
    return 0;
  }
  piVar5 = *(int **)(param_1 + 4);
  local_70 = 1;
  uVar3 = FUN_001b3d00(local_1c);
  piVar4 = piVar5;
  if (1 < uVar3) {
    do {
      FUN_001b3d0c(auStack_58,local_1c,local_70);
      iVar6 = 0;
      iVar2 = (**(code **)(*piVar5 + 0x10))(piVar5);
      if (iVar2 < 1) {
LAB_0012dc82:
        uVar1 = local_1c;
        uVar3 = FUN_001b3d00();
        piVar4 = piVar5;
        if (local_70 < uVar3) {
          do {
            FUN_001b3d0c(auStack_48,uVar1,local_70);
            iVar2 = FUN_001f01c4(0x54,1);
            if (iVar2 == 0) {
              piVar4 = (int *)0x0;
            }
            else {
              piVar4 = (int *)FUN_0013b2f4(iVar2,auStack_48,piVar5);
            }
            local_28[0] = piVar4;
            FUN_00240f58(piVar5 + 0xf,local_28);
            (**(code **)(*piVar5 + 0x4c))(piVar5,piVar5[0xd],piVar5[0xe]);
            (**(code **)(*piVar5 + 8))(piVar5);
            if (piVar5[0xb] != 0) {
              FUN_000f0fec();
            }
            if (piVar4 == (int *)0x0) {
              FUN_001aafac(auStack_48);
LAB_0012dd2e:
              FUN_001aafac(auStack_58);
              return 0;
            }
            piVar4[0xb] = (int)piVar5;
            FUN_001aafac(auStack_48);
            local_70 = local_70 + 1;
            uVar3 = FUN_001b3d00(uVar1);
            piVar5 = piVar4;
          } while (local_70 < uVar3);
        }
        FUN_001aafac(auStack_58);
        break;
      }
      while( true ) {
        iVar2 = (**(code **)(*piVar5 + 0x40))(piVar5,iVar6);
        if ((iVar2 == 0) ||
           (piVar4 = (int *)FUN_001c7218(iVar2,DAT_0012dd40,DAT_0012dd3c,0xffffffff),
           piVar4 == (int *)0x0)) goto LAB_0012dd2e;
        uVar1 = (**(code **)(*piVar4 + 0xc))(piVar4);
        iVar2 = FUN_001c0b0c(uVar1,auStack_58);
        if (iVar2 != 0) break;
        iVar6 = iVar6 + 1;
        iVar2 = (**(code **)(*piVar5 + 0x10))(piVar5);
        if (iVar2 <= iVar6) goto LAB_0012dc82;
      }
      FUN_001aafac(auStack_58);
      local_70 = local_70 + 1;
      uVar3 = FUN_001b3d00(local_1c);
      piVar5 = piVar4;
    } while (local_70 < uVar3);
  }
  FUN_00138750(local_68,piVar4);
  FUN_001387bc(local_18,local_68);
  if (local_68[0] != 0) {
    FUN_000f0fa8();
  }
  return 1;
}

