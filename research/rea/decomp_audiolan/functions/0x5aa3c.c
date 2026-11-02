// rea decompile_all
// name: FUN_0005aa3c
// address: 0x5aa3c
// body: available
// range: 0x5aa3c-0x5ac8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0005aa3c(int param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  int *local_28;
  undefined4 local_24;
  
  FUN_0014c228();
  iVar2 = FUN_001606dc();
  pcVar5 = *(char **)(param_1 + 4);
  if (*(char **)(param_1 + 8) != pcVar5) {
    do {
      if (param_3 == 0) {
        if (iVar2 != 0) {
          if (iVar2 != 1) {
            return 0;
          }
          local_28 = (int *)FUN_001a0808(0x10,1);
          if (local_28 != (int *)0x0) {
            *local_28 = 0;
            local_28[1] = 0;
            *(undefined1 *)(local_28 + 2) = 1;
            local_28[3] = 0;
            iVar2 = FUN_001a0808(param_4,10);
            piVar1 = local_28;
            if (iVar2 != 0) {
              *local_28 = iVar2;
              local_28[1] = (int)param_4;
              *(undefined1 *)(local_28 + 2) = 0;
              iVar2 = FUN_000034d0(param_5);
              uVar6 = FUN_001a0808(iVar2 + 1,1);
              iVar2 = (int)uVar6;
              uVar4 = (int)((ulonglong)uVar6 >> 0x20);
              if (iVar2 != 0) {
                uVar4 = param_5;
              }
              piVar1[3] = iVar2;
              if (iVar2 != 0) {
                thunk_FUN_00003418(iVar2,uVar4);
              }
              FUN_001dfb78(param_1 + 0x10,&local_28);
              FUN_001e20fc(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
                           DAT_0005ac90);
              return *local_28;
            }
            if (local_28 != (int *)0x0) {
              if (local_28[3] != 0) {
                FUN_0019f30c();
                piVar1[3] = 0;
              }
              FUN_0019f30c(piVar1);
            }
          }
          return 0;
        }
        if (*pcVar5 == '\0') {
          local_24 = param_5;
          local_28 = param_4;
          iVar3 = FUN_0005a078(param_1,pcVar5,param_2,0);
          if (iVar3 != 0) {
            return iVar3;
          }
        }
      }
      else if (param_3 == 1) {
        if (*pcVar5 == '\0') {
          local_24 = param_5;
          local_28 = param_4;
          iVar3 = FUN_0005a078(param_1,pcVar5,param_2,1);
          if (iVar3 != 0) {
            return iVar3;
          }
        }
      }
      else {
        if (param_3 != 2) {
          return 0;
        }
        if (iVar2 == 0) {
          if (*pcVar5 == '\x01') {
            local_24 = param_5;
            local_28 = param_4;
            iVar3 = FUN_0005a078(param_1,pcVar5,param_2,2);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
        }
        else {
          if (iVar2 != 1) {
            return 0;
          }
          if (*pcVar5 == '\0') {
            local_24 = param_5;
            local_28 = param_4;
            iVar3 = FUN_0005a078(param_1,pcVar5,param_2,2);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
        }
      }
      pcVar5 = pcVar5 + 0x1c;
    } while (*(char **)(param_1 + 8) != pcVar5);
  }
  return 0;
}

