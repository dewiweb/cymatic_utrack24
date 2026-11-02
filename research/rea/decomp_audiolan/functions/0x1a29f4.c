// rea decompile_all
// name: FUN_001a29f4
// address: 0x1a29f4
// body: available
// range: 0x1a29f4-0x1a2c11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001a29f4(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int local_30;
  int local_2c;
  int local_28;
  int *piStack_20;
  int *local_1c;
  int *local_18;
  
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_1[2] != 0)) && (param_1[1] != 0)) {
    piStack_20 = param_1;
    local_1c = param_2;
    local_18 = param_3;
    iVar1 = FUN_001a4d44();
    uVar6 = iVar1 * 0x28 + 0xf + param_1[1];
    if (*(code **)s_x2__content_type__001a2c14._0_4_ == entry) {
      iVar1 = FUN_0019b388(uVar6);
    }
    else {
      iVar1 = (**(code **)s_x2__content_type__001a2c14._0_4_)(uVar6);
    }
    if (iVar1 != 0) {
      iVar2 = iVar1;
      if (param_1[3] != 0) {
        iVar2 = FUN_001a7010(iVar1,s_x2__content_type__001a2c14 + 4,0xe);
        local_2c = FUN_001a3658(param_1[3],&local_30);
        if (local_2c != 0) {
          if ((code *)*DAT_001a2c28 == entry) {
            FUN_0018a280(iVar1);
          }
          else {
            (*(code *)*DAT_001a2c28)(iVar1);
          }
          return local_2c;
        }
        iVar3 = FUN_000034d0(local_30);
        iVar4 = iVar2 - iVar1;
        if (uVar6 < iVar3 + iVar4 + 4U) {
          iVar2 = FUN_000034d0(local_30);
          uVar6 = iVar2 + uVar6 + 4;
          if ((code *)*DAT_001a2c2c == entry) {
            iVar1 = FUN_001ab47c(iVar1,uVar6);
          }
          else {
            iVar1 = (*(code *)*DAT_001a2c2c)(iVar1,uVar6);
          }
          iVar2 = iVar1 + iVar4;
        }
        uVar5 = FUN_001a6eec(iVar2,local_30);
        if (local_30 != 0) {
          if ((code *)*DAT_001a2c28 == entry) {
            FUN_0018a280();
          }
          else {
            (*(code *)*DAT_001a2c28)();
          }
        }
        iVar2 = FUN_001a7010(uVar5,&DAT_001a2c30,2);
      }
      local_2c = 0;
      while( true ) {
        iVar3 = FUN_001a4bc4(param_1[2],local_2c);
        if (iVar3 != 0) {
          iVar3 = FUN_001a4d44();
          if ((0 < iVar3) || (param_1[3] != 0)) {
            iVar2 = FUN_001a7010(iVar2,&DAT_001a2c30,2);
          }
          iVar3 = iVar2 - iVar1;
          if (uVar6 < (uint)(param_1[1] + iVar3 + 4)) {
            if ((code *)*DAT_001a2c2c == entry) {
              iVar1 = FUN_001ab47c(iVar1,param_1[1] + uVar6 + 4);
            }
            else {
              iVar1 = (*(code *)*DAT_001a2c2c)(iVar1);
            }
            iVar2 = iVar1 + iVar3;
          }
          FUN_00003628(iVar2,*param_1,param_1[1]);
          if (local_18 != (int *)0x0) {
            *local_18 = (param_1[1] + iVar2) - iVar1;
          }
          *local_1c = iVar1;
          return 0;
        }
        uVar5 = FUN_001a4bdc(param_1[2],local_2c);
        local_28 = FUN_001a461c(uVar5,&local_30);
        if (local_28 != 0) break;
        iVar3 = FUN_000034d0(local_30);
        iVar4 = iVar2 - iVar1;
        if (uVar6 < iVar3 + iVar4 + 4U) {
          iVar2 = FUN_000034d0(local_30);
          uVar6 = iVar2 + uVar6 + 4;
          if ((code *)*DAT_001a2c2c == entry) {
            iVar1 = FUN_001ab47c(iVar1,uVar6);
          }
          else {
            iVar1 = (*(code *)*DAT_001a2c2c)(iVar1,uVar6);
          }
          iVar2 = iVar1 + iVar4;
        }
        uVar5 = FUN_001a6eec(iVar2,local_30);
        if (local_30 != 0) {
          if ((code *)*DAT_001a2c28 == entry) {
            FUN_0018a280();
          }
          else {
            (*(code *)*DAT_001a2c28)();
          }
        }
        iVar2 = FUN_001a7010(uVar5,&DAT_001a2c30,2);
        local_2c = local_2c + 1;
      }
      if (iVar1 != 0) {
        if ((code *)*DAT_001a2c28 == entry) {
          FUN_0018a280(iVar1);
        }
        else {
          (*(code *)*DAT_001a2c28)(iVar1);
        }
      }
      return local_28;
    }
    return -4;
  }
  return -2;
}

