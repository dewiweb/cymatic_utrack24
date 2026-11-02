// rea decompile_all
// name: FUN_0010bdc8
// address: 0x10bdc8
// body: available
// range: 0x10bdc8-0x10c0db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0010bdc8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 auStack_cc [8];
  undefined1 auStack_c4 [16];
  uint local_b4;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [22];
  undefined2 local_4a;
  undefined1 auStack_48 [12];
  undefined1 local_3c;
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [16];
  
  FUN_0015d844(auStack_80);
  iVar1 = FUN_0015d8f8(auStack_80);
  if (iVar1 != 0) {
    piVar5 = param_1 + 0x1b9;
    do {
      puVar2 = (uint *)FUN_0015d8cc(auStack_80);
      uVar3 = *puVar2;
      uVar4 = uVar3 & 0xff;
      if (uVar4 == 0x16) {
        FUN_00102134(param_1 + 0x1b0,param_2,puVar2,1);
      }
      else if (uVar4 < 0x17) {
        if (uVar4 == 0x10) {
          FUN_001013d4(param_1 + 0x1b0,param_2,puVar2,1);
        }
        else if (uVar4 == 0x11) {
          FUN_00100cfc(param_1 + 0x1b0,param_2,puVar2,1);
        }
        else if (uVar4 == 0x12) {
          FUN_00100fcc(param_1 + 0x1b0,param_2,puVar2,1);
        }
        else if (uVar4 == 0x13) {
          FUN_001019e8(param_1 + 0x1b0,param_2,puVar2,1);
        }
        else {
LAB_0010be64:
          param_1[0x1e9] = param_1[0x1e9] + 1;
        }
      }
      else if (uVar4 == 0x17) {
        FUN_00101df4(param_1 + 0x1b0,param_2,puVar2,1);
      }
      else if (uVar4 == 0x18) {
        FUN_00102130(param_1 + 0x1b0,param_2,puVar2,1);
      }
      else if (uVar4 == 0x20) {
        if ((uVar3 & 0x40000) != 0) {
          FUN_000f93d8(&local_d8);
          iVar1 = FUN_000ea3bc(&local_d8,puVar2);
          if (iVar1 == 0) {
            param_1[0x1e8] = param_1[0x1e8] + 1;
          }
          else {
            uVar3 = local_b4 & 7;
            if (uVar3 == 1) {
              FUN_00108b2c(piVar5,param_2,1,&local_d8);
            }
            else if (uVar3 == 2) {
              FUN_001089cc(piVar5,param_2,1,&local_d8);
            }
            else if (uVar3 == 3) {
              FUN_0010886c(piVar5,param_2,1,&local_d8);
            }
          }
          FUN_000f943c(&local_d8);
        }
      }
      else {
        if (uVar4 != 0x31) goto LAB_0010be64;
        if ((uVar3 & 0x40000) != 0) {
          FUN_000f9c4c(auStack_60);
          iVar1 = FUN_000ea3bc(auStack_60,puVar2);
          if (iVar1 == 0) {
            param_1[0x1e8] = param_1[0x1e8] + 1;
          }
          else {
            FUN_000eea30(&local_d8);
            thunk_FUN_000ea2a4(auStack_38,param_1 + 0xfa);
            FUN_0010f5fc(auStack_2c,auStack_48);
            iVar1 = FUN_000ee1f8(&local_d8,local_4a,auStack_2c,auStack_38);
            FUN_000ea314(auStack_38);
            if ((iVar1 != 0) && (iVar1 = FUN_000fdab8(param_1 + 0xfa,local_3c,iVar1), iVar1 != 0)) {
              (**(code **)(*param_1 + 0x2c))(param_1,&local_d8,param_3);
            }
            (**(code **)(*param_1 + 0x20))(param_1,param_2);
            FUN_000ee880(&local_d8);
            FUN_000e9f98(auStack_c4);
            FUN_000e9f98(auStack_cc);
            local_d4 = 0;
            local_d8 = 0;
            local_d0 = 0;
          }
          FUN_000f9c7c(auStack_60);
        }
      }
      FUN_000efff4(auStack_80);
      iVar1 = FUN_0015d8f8(auStack_80);
    } while (iVar1 != 0);
  }
  FUN_000f0060(auStack_80);
  return;
}

