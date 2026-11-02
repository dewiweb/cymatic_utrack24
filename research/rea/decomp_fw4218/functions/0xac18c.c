// rea decompile_all
// name: FUN_000ac18c
// address: 0xac18c
// body: available
// range: 0xac18c-0xac913 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000ac18c(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 auStack_58 [20];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 local_20;
  
  FUN_000f4e84();
  iVar2 = FUN_000f4fc0();
  iVar4 = iVar2;
  switch(param_2) {
  case 0:
    uVar3 = FUN_001b557c(iVar2);
    iVar4 = FUN_000aa7b4(param_1,uVar3);
    break;
  case 1:
    break;
  case 2:
    uVar3 = FUN_001b59d4(iVar2);
    iVar4 = FUN_000aa640(param_1,uVar3);
    break;
  case 3:
    uVar3 = FUN_00230e4c(auStack_28);
    FUN_001b590c(auStack_24,iVar2);
    uVar5 = FUN_0022d168(auStack_24);
    uVar3 = FUN_00231ef4(&local_20,uVar5,uVar3);
    FUN_000aad5c(param_1,uVar3);
    FUN_00232190(&local_20);
    iVar4 = FUN_00232190(auStack_24);
    break;
  case 4:
    FUN_001b5a08(auStack_58,iVar2);
    FUN_000ab65c(param_1,auStack_58);
    FUN_000639f4(auStack_58);
    (**(code **)(**(int **)(param_1 + 0x130) + 0x28))();
    (**(code **)(**(int **)(param_1 + 0x4cc) + 0x58))(*(int **)(param_1 + 0x4cc),0);
    iVar4 = (**(code **)(**(int **)(param_1 + 0x130) + 0x2c))();
    break;
  case 5:
    uVar3 = FUN_00230e4c(auStack_34);
    FUN_001b5678(auStack_30,iVar2);
    uVar5 = FUN_0022d168(auStack_30);
    uVar3 = FUN_00231ef4(auStack_2c,uVar5,uVar3);
    FUN_000aaa20(param_1,uVar3);
    FUN_00232190(auStack_2c);
    iVar4 = FUN_00232190(auStack_30);
    break;
  case 6:
    uVar3 = FUN_001b5af4(iVar2);
    iVar4 = FUN_000ac0cc(param_1,uVar3);
    break;
  case 7:
    uVar3 = FUN_001b5a54(iVar2);
    iVar4 = FUN_000ab994(param_1,uVar3);
    break;
  case 8:
    iVar4 = FUN_0013e444(param_1 + 0x848,1);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 0x62c) = 0;
      uVar3 = FUN_001b59a4(iVar2);
      iVar4 = FUN_000aaf5c(param_1,uVar3);
    }
    break;
  case 9:
    uVar3 = FUN_001b5660(iVar2);
    iVar4 = FUN_000aa7e0(param_1,uVar3);
    break;
  case 10:
    uVar3 = FUN_001b54f4(iVar2);
    iVar4 = FUN_000aa6d0(param_1,uVar3);
    break;
  case 0xb:
    uVar3 = FUN_001b5974(iVar2);
    iVar4 = FUN_000aaebc(param_1,uVar3);
    break;
  case 0xc:
    uVar3 = FUN_001b59fc(iVar2);
    iVar4 = FUN_000aad30(param_1,uVar3);
    break;
  case 0xd:
    FUN_001b5a6c(auStack_38,iVar2);
    FUN_000aaae8(param_1,auStack_38);
    iVar4 = FUN_00232190(auStack_38);
    break;
  case 0xe:
    uVar3 = FUN_001b5aa0(iVar2);
    iVar4 = FUN_000aab44(param_1,uVar3);
    break;
  case 0xf:
    uVar3 = FUN_001b5b44(iVar2);
    iVar4 = FUN_000ab090(param_1,uVar3);
    break;
  case 0x10:
    uVar3 = FUN_001b5b78(iVar2);
    iVar4 = FUN_000ab288(param_1,uVar3);
    break;
  case 0x11:
    uVar3 = FUN_001b5b38(iVar2);
    iVar4 = FUN_000acb40(param_1,uVar3);
    break;
  case 0x12:
    break;
  case 0x13:
    iVar4 = FUN_0013e444(param_1 + 0x848,8);
    if (iVar4 == 0) {
      FUN_001b56ac(iVar2,&local_3c,&local_40);
      FUN_000ab180(param_1,local_3c);
      iVar4 = FUN_000aadb8(param_1,local_40);
    }
    break;
  case 0x14:
    break;
  case 0x15:
    iVar4 = FUN_000ad8e0(param_1,iVar2);
    break;
  case 0x16:
    break;
  case 0x17:
    iVar4 = 0;
    if (*(int *)(param_1 + 0x134) != 0) {
      FUN_001b550c(&local_3c,iVar2);
      piVar6 = (int *)((int)*(int **)(param_1 + 0x134) +
                      *(int *)(**(int **)(param_1 + 0x134) + -0x1ec));
      uVar3 = FUN_0022d49c(&local_3c);
      (**(code **)(*piVar6 + 0xe4))(piVar6,uVar3);
      (**(code **)(**(int **)(param_1 + 0x130) + 0xb0))();
      iVar4 = FUN_002329f0(&local_3c);
    }
    break;
  case 0x18:
    break;
  case 0x19:
    iVar4 = 0;
    if (*(int *)(param_1 + 0x134) != 0) {
      FUN_00171e90(&local_40);
      local_44 = FUN_001b5414(iVar2);
      iVar4 = FUN_000aabc0(param_1,local_44,&local_40);
      if (iVar4 != 0) {
        piVar6 = (int *)((int)*(int **)(param_1 + 0x134) +
                        *(int *)(**(int **)(param_1 + 0x134) + -0x1ec));
        uVar3 = FUN_001beccc(&local_40);
        (**(code **)(*piVar6 + 0xfc))(piVar6,DAT_000ac914,uVar3);
        (**(code **)(**(int **)(param_1 + 0x130) + 0xb0))();
      }
      iVar4 = FUN_00171ea4(&local_40);
    }
    break;
  case 0x1a:
    uVar3 = FUN_001b5bb8(iVar2);
    iVar4 = FUN_000ada04(param_1,uVar3);
    break;
  case 0x1b:
    uVar3 = FUN_001b5bc4(iVar2);
    iVar4 = FUN_000ada58(param_1,uVar3);
    break;
  case 0x1c:
    break;
  case 0x1d:
    break;
  case 0x1e:
    uVar3 = FUN_001beccc(param_1 + 0x808);
    iVar4 = FUN_0013eab8(param_1 + 0x848,uVar3);
    break;
  case 0x1f:
    uVar3 = FUN_001b5654(iVar2);
    iVar4 = FUN_000ab914(param_1,uVar3);
    break;
  case 0x20:
    break;
  case 0x21:
    break;
  case 0x22:
    uVar3 = FUN_001b5b0c(iVar2);
    iVar4 = FUN_000ad9b8(param_1,uVar3);
    break;
  case 0x23:
    uVar3 = FUN_001b5498(iVar2);
    iVar4 = FUN_000ab8bc(param_1,uVar3);
    break;
  case 0x24:
    uVar3 = FUN_001b53b8(iVar2);
    iVar4 = FUN_000ab0c4(param_1,uVar3);
    break;
  case 0x25:
    uVar3 = FUN_001b5470(iVar2);
    iVar4 = FUN_000ab864(param_1,uVar3);
    break;
  case 0x26:
    iVar4 = FUN_000ad5e4(param_1);
    break;
  case 0x27:
    iVar4 = FUN_000ad674(param_1);
    break;
  case 0x28:
    break;
  case 0x29:
    break;
  case 0x2a:
    iVar4 = FUN_000ac0fc(param_1);
    break;
  case 0x2b:
    break;
  case 0x2c:
    (**(code **)(**(int **)(param_1 + 0x130) + 0x28))();
    FUN_000f4e84();
    uVar3 = FUN_000f515c();
    FUN_0023afd0(param_1 + 0x810,uVar3);
    piVar6 = *(int **)(param_1 + 400);
    sVar1 = FUN_0022e20c(param_1 + 0x810);
    (**(code **)(*piVar6 + 0x40))(piVar6,sVar1 + 2);
    iVar4 = (**(code **)(**(int **)(param_1 + 0x130) + 0x2c))();
    break;
  case 0x2d:
    break;
  case 0x2e:
    break;
  case 0x2f:
    break;
  case 0x30:
    break;
  case 0x31:
    break;
  case 0x32:
    break;
  case 0x33:
    uVar3 = FUN_001b5540(iVar2);
    iVar4 = FUN_000aa43c(param_1,uVar3);
    break;
  case 0x34:
    local_20 = FUN_001b5980(iVar2);
    iVar4 = FUN_000aa468(param_1,local_20);
    break;
  case 0x35:
    local_20 = FUN_001b5500(iVar2);
    iVar4 = FUN_000aa728(param_1,local_20);
  }
  return iVar4;
}

