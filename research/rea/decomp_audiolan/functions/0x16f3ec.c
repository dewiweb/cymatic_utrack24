// rea decompile_all
// name: FUN_0016f3ec
// address: 0x16f3ec
// body: available
// range: 0x16f3ec-0x16f5e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0016f3ec(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_30;
  int local_2c;
  int local_24;
  int local_20;
  int local_1c [2];
  
  if ((param_1 == 0) ||
     ((((*(int *)(param_1 + 0x4c) == 0 && (*(int *)(param_1 + 0x54) == 0)) || (param_2 == 0)) ||
      ((*(int **)(param_2 + 0x70) == (int *)0x0 || (**(int **)(param_2 + 0x70) == 0)))))) {
    return 0xfffffffe;
  }
  iVar2 = FUN_001a4bdc(param_2 + 0xb0,0);
  uVar1 = DAT_0016f5e8;
  if (iVar2 == 0) {
    return uVar1;
  }
  FUN_001a7c44(iVar2 + 0x14,s_branch_0016f5ec,&local_20);
  FUN_001a7c44(*(int *)(param_1 + 0xc) + 0x14,s_branch_0016f5ec,local_1c);
  if (local_1c[0] == 0) {
    if (local_20 != 0) {
      return uVar1;
    }
  }
  else {
    if (local_20 == 0) {
      return uVar1;
    }
    if (*(int *)(local_1c[0] + 4) == 0) {
      return 0xffffffff;
    }
    if (*(int *)(local_20 + 4) == 0) {
      return 0xffffffff;
    }
    iVar3 = FUN_000034d0(*(int *)(local_1c[0] + 4));
    iVar4 = FUN_000034d0(*(undefined4 *)(local_20 + 4));
    if (iVar3 != iVar4) {
      return 0xffffffff;
    }
    iVar3 = FUN_00003570(*(undefined4 *)(local_1c[0] + 4),s_z9hG4bK_0016f5f4,7);
    if ((iVar3 == 0) &&
       (iVar3 = FUN_00003570(*(undefined4 *)(local_20 + 4),s_z9hG4bK_0016f5f4,7), iVar3 == 0)) {
      iVar3 = FUN_00003960(*(undefined4 *)(local_1c[0] + 4),*(undefined4 *)(local_20 + 4));
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      iVar3 = FUN_001b91ee(iVar2);
      local_2c = FUN_001b91ee(*(undefined4 *)(param_1 + 0xc));
      iVar2 = FUN_001b91e6(iVar2);
      iVar4 = FUN_001b91e6(*(undefined4 *)(param_1 + 0xc));
      if (iVar2 == 0) {
        return 0xffffffff;
      }
      if (iVar4 == 0) {
        return 0xffffffff;
      }
      iVar2 = FUN_00003960(iVar4,iVar2);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      if (iVar3 == 0) {
        if (local_2c != 0) {
          iVar2 = FUN_00003960(local_2c,&DAT_0016f5fc);
          goto joined_r0x0016f51e;
        }
      }
      else {
        if (local_2c == 0) {
          iVar2 = FUN_00003960(iVar3,&DAT_0016f5fc);
        }
        else {
          iVar2 = FUN_00003960(local_2c,iVar3);
        }
joined_r0x0016f51e:
        if (iVar2 != 0) {
          return 0xffffffff;
        }
      }
      iVar2 = FUN_00003960(**(undefined4 **)(param_1 + 0x1c),s_INVITE_0016f604);
      if ((iVar2 == 0) &&
         (iVar2 = FUN_00003960(**(undefined4 **)(param_2 + 0x70),&DAT_0016f60c), iVar2 == 0)) {
        return 0;
      }
      iVar2 = FUN_00003960(**(undefined4 **)(param_1 + 0x1c),**(undefined4 **)(param_2 + 0x70));
      goto joined_r0x0016f54e;
    }
  }
  iVar3 = FUN_001a2d2c(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_2 + 0x4c));
  if (iVar3 != 0) {
    return 0xffffffff;
  }
  if ((*(int *)(param_2 + 0xc) == 0) &&
     (iVar3 = FUN_00003960(*(undefined4 *)(param_2 + 8),&DAT_0016f60c), iVar3 == 0)) {
    FUN_001a7c44(*(int *)(param_1 + 0x14) + 8,&DAT_0016f610,&local_24);
    FUN_001a7c44(*(int *)(param_2 + 0xac) + 8,&DAT_0016f610,&local_30);
    if (local_24 != 0) {
      if (local_30 == 0) {
        return 0xffffffff;
      }
LAB_0016f5aa:
      iVar3 = FUN_001a71e8(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_2 + 0xac));
      goto joined_r0x0016f582;
    }
    if (local_30 == 0) goto LAB_0016f5aa;
  }
  else {
    if (*(int *)(param_1 + 0x20) == 0) {
      return 0xffffffff;
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x20) + 0xac);
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    iVar3 = FUN_001a71e8(iVar3,*(undefined4 *)(param_2 + 0xac));
joined_r0x0016f582:
    if (iVar3 != 0) {
      return 0xffffffff;
    }
  }
  iVar3 = FUN_001a42c0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x7c));
  if (iVar3 != 0) {
    return 0xffffffff;
  }
  iVar3 = FUN_001a3878(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_2 + 0x70));
  if (iVar3 != 0) {
    return 0xffffffff;
  }
  iVar2 = FUN_001a8960(*(undefined4 *)(param_1 + 0xc),iVar2);
joined_r0x0016f54e:
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  return 0;
}

