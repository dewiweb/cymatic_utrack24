// rea decompile_all
// name: FUN_000514e8
// address: 0x514e8
// body: available
// range: 0x514e8-0x5172b inclusive
// range: 0x51834-0x51937 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000514e8(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_34 [12];
  int *local_28;
  
  FUN_001bbbd0(auStack_34);
  uVar1 = FUN_0008cf78();
  iVar2 = FUN_0008ce54(uVar1,s_AudioHWService_0005172c,auStack_34);
  if (iVar2 == 0) {
    FUN_000028a4(s_ERROR__no_AudioHWService_0005173c);
    FUN_000a4714(auStack_34);
    uVar1 = 0;
  }
  else {
    piVar3 = (int *)FUN_001d75e4(auStack_34);
    uVar1 = FUN_0018afd4();
    iVar2 = (**(code **)(*piVar3 + 0x80))(piVar3,uVar1,2);
    *param_1 = iVar2;
    if (*param_1 == 0) {
      FUN_000028a4(s_ERROR__initializeI2CGPIOs__GPIO_2_00051758);
      FUN_000a4714(auStack_34);
      uVar1 = 0;
    }
    else {
      FUN_00086440(*param_1);
      FUN_00086388(*param_1);
      piVar3 = (int *)FUN_001d75e4(auStack_34);
      uVar1 = FUN_0018afd4();
      iVar2 = (**(code **)(*piVar3 + 0x80))(piVar3,uVar1,4);
      param_1[1] = iVar2;
      if (param_1[1] == 0) {
        FUN_000028a4(s_ERROR__initializeI2CGPIOs__GPIO_4_00051784);
        FUN_000a4714(auStack_34);
        uVar1 = 0;
      }
      else {
        FUN_00086440(param_1[1]);
        FUN_00086388(param_1[1]);
        piVar3 = (int *)FUN_001d75e4(auStack_34);
        uVar1 = FUN_0018afd4();
        iVar2 = (**(code **)(*piVar3 + 0x80))(piVar3,uVar1,5);
        param_1[2] = iVar2;
        if (param_1[2] == 0) {
          FUN_000028a4(s_ERROR__initializeI2CGPIOs__GPIO_5_000517b0);
          FUN_000a4714(auStack_34);
          uVar1 = 0;
        }
        else {
          FUN_00086440(param_1[2]);
          FUN_00086388(param_1[2]);
          piVar3 = (int *)FUN_001d75e4(auStack_34);
          uVar1 = FUN_0018afd4();
          iVar2 = (**(code **)(*piVar3 + 0x80))(piVar3,uVar1,8);
          param_1[3] = iVar2;
          if (param_1[3] == 0) {
            FUN_000028a4(s_ERROR__initializeI2CGPIOs__GPIO_8_000517dc);
            FUN_000a4714(auStack_34);
            uVar1 = 0;
          }
          else {
            FUN_00086440(param_1[3]);
            FUN_00086388(param_1[3]);
            piVar3 = (int *)FUN_001d75e4(auStack_34);
            uVar1 = FUN_0018afd4();
            iVar2 = (**(code **)(*piVar3 + 0x80))(piVar3,uVar1,9);
            param_1[4] = iVar2;
            if (param_1[4] == 0) {
              FUN_000028a4(s_ERROR__initializeI2CGPIOs__GPIO_9_00051808);
              FUN_000a4714(auStack_34);
              uVar1 = 0;
            }
            else {
              FUN_00086440(param_1[4]);
              FUN_00086388(param_1[4]);
              piVar3 = (int *)FUN_001d75e4(auStack_34);
              uVar1 = FUN_0018afd4();
              iVar2 = (**(code **)(*piVar3 + 0x80))(piVar3,uVar1,6);
              param_1[6] = iVar2;
              if (param_1[6] == 0) {
                FUN_000028a4(s_ERROR__initializeI2CGPIOs__GPIO_6_00051938);
                FUN_000a4714(auStack_34);
                uVar1 = 0;
              }
              else {
                FUN_00086480(param_1[6]);
                FUN_000863b4(param_1[6]);
                FUN_00086388(param_1[6]);
                local_28 = (int *)FUN_001d75e4(auStack_34);
                uVar1 = FUN_0018afd4();
                iVar2 = (**(code **)(*local_28 + 0x80))(local_28,uVar1,7);
                param_1[7] = iVar2;
                if (param_1[7] == 0) {
                  FUN_000028a4(s_ERROR__initializeI2CGPIOs__GPIO_7_00051964);
                  FUN_000a4714(auStack_34);
                  uVar1 = 0;
                }
                else {
                  FUN_00086480(param_1[7]);
                  FUN_000863b4(param_1[7]);
                  FUN_00086388(param_1[7]);
                  FUN_000a4714(auStack_34);
                  uVar1 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar1;
}

