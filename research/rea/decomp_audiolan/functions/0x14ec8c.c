// rea decompile_all
// name: FUN_0014ec8c
// address: 0x14ec8c
// body: available
// range: 0x14ec8c-0x14ee2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014ec8c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int local_60;
  undefined4 local_5c;
  undefined1 auStack_58 [64];
  
  local_5c = _DAT_0014ee2c;
  iVar1 = FUN_00042a00(param_2,param_3,&local_5c);
  if ((iVar1 != 0) && (uVar2 = FUN_000034d0(local_5c), uVar2 < 0x40)) {
    FUN_001dcef8(param_4);
    FUN_00003418(auStack_58,local_5c);
    iVar1 = FUN_00003308(auStack_58,&DAT_0014ee58);
    while (iVar1 != 0) {
      iVar1 = FUN_00002f10(iVar1,&DAT_0014ee5c,&local_60);
      if (iVar1 == 1) {
        piVar3 = (int *)param_4[1];
        iVar1 = param_4[4];
        if (piVar3 == (int *)0x0) {
          if (param_4[2] == param_4[3]) {
            uVar2 = 1;
            if (*param_4 != 0) {
              uVar4 = *(uint *)(*param_4 + 4);
              uVar2 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
              if (uVar2 < uVar4 + 1) {
                uVar2 = uVar4 + 1;
              }
            }
            piVar3 = (int *)FUN_0010f82c(0xc,0);
            iVar5 = FUN_0010f82c(uVar2 * 0xc,0);
            piVar3[2] = iVar5;
            *piVar3 = *param_4;
            piVar3[1] = uVar2;
            *param_4 = (int)piVar3;
            iVar5 = piVar3[2];
            param_4[2] = iVar5;
            param_4[3] = iVar5 + uVar2 * 0xc;
          }
          piVar3 = (int *)param_4[2];
          param_4[2] = (int)(piVar3 + 3);
        }
        else {
          param_4[1] = *piVar3;
        }
        if (piVar3 + 2 != (int *)0x0) {
          piVar3[2] = local_60;
        }
        *piVar3 = iVar1;
        piVar3[1] = *(int *)(iVar1 + 4);
        **(undefined4 **)(iVar1 + 4) = piVar3;
        *(int **)(iVar1 + 4) = piVar3;
        param_4[5] = param_4[5] + 1;
      }
      else {
        FUN_000028a4(DAT_0014ee60,param_3);
      }
      iVar1 = FUN_00003308(0,&DAT_0014ee58);
    }
    FUN_001da314(&local_5c);
    return;
  }
  FUN_000028a4(s_I_ERROR__AudioMode__Could_NOT_ge_0014ee2e + 2,param_3);
  FUN_001da314(&local_5c);
  return;
}

