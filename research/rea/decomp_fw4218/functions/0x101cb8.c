// rea decompile_all
// name: FUN_00101cb8
// address: 0x101cb8
// body: available
// range: 0x101cb8-0x10217f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10213c to 0x710f8 FUN_000710f8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00101cb8(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_20;
  int local_1c;
  undefined1 auStack_18 [8];
  
  *param_1 = DAT_00102180;
  local_1c = param_1[0x9d];
  local_20 = *(int *)(local_1c + 8);
  FUN_0021570c(auStack_18,param_1 + 0x99,&local_20,&local_1c);
  FUN_000fe0a0(param_1);
  FUN_000fd288(param_1);
  piVar6 = param_1 + 0x99;
  iVar1 = param_1[0x9d];
  if (iVar1 != 0) {
    local_20 = *(int *)(iVar1 + 8);
    local_1c = iVar1;
    FUN_0021570c(auStack_18,piVar6,&local_20,&local_1c);
    iVar1 = param_1[0x9d];
    *(undefined4 *)(iVar1 + 0xc) = param_1[0x9a];
    param_1[0x9a] = iVar1;
    piVar2 = (int *)*piVar6;
    while (piVar2 != (int *)0x0) {
      *piVar6 = *piVar2;
      FUN_00173a54(piVar2[2],piVar2[1],0);
      FUN_00173a54(piVar2,1,0);
      piVar2 = (int *)*piVar6;
    }
  }
  FUN_00232920(param_1 + 0x96);
  FUN_00232920(param_1 + 0x94);
  FUN_00232920(param_1 + 0x93);
  FUN_00232920(param_1 + 0x92);
  FUN_00232920(param_1 + 0x91);
  FUN_00232920(param_1 + 0x90);
  FUN_00232920(param_1 + 0x8f);
  FUN_00232920(param_1 + 0x8e);
  FUN_00232920(param_1 + 0x8d);
  piVar6 = param_1 + 0x7e;
  iVar1 = param_1[0x82];
  if (iVar1 != 0) {
    local_20 = *(int *)(iVar1 + 8);
    local_1c = iVar1;
    FUN_0021ebb4(auStack_18,piVar6,&local_20,&local_1c);
    iVar1 = param_1[0x82];
    *(undefined4 *)(iVar1 + 0xc) = param_1[0x7f];
    param_1[0x7f] = iVar1;
    piVar2 = (int *)*piVar6;
    while (piVar2 != (int *)0x0) {
      *piVar6 = *piVar2;
      FUN_00173a54(piVar2[2],piVar2[1],0);
      FUN_00173a54(piVar2,1,0);
      piVar2 = (int *)*piVar6;
    }
  }
  piVar6 = param_1 + 0x77;
  iVar1 = param_1[0x7b];
  if (iVar1 != 0) {
    local_1c = *(int *)(iVar1 + 8);
    local_20 = iVar1;
    FUN_002202f0(auStack_18,piVar6,&local_1c,&local_20);
    iVar1 = param_1[0x7b];
    *(undefined4 *)(iVar1 + 0xc) = param_1[0x78];
    param_1[0x78] = iVar1;
    piVar2 = (int *)*piVar6;
    while (piVar2 != (int *)0x0) {
      *piVar6 = *piVar2;
      FUN_00173a54(piVar2[2],piVar2[1],0);
      FUN_00173a54(piVar2,1,0);
      piVar2 = (int *)*piVar6;
    }
  }
  piVar6 = param_1 + 0x70;
  iVar1 = param_1[0x74];
  if (iVar1 != 0) {
    local_1c = *(int *)(iVar1 + 8);
    local_20 = iVar1;
    FUN_0021f704(auStack_18,piVar6,&local_1c,&local_20);
    iVar1 = param_1[0x74];
    *(undefined4 *)(iVar1 + 0xc) = param_1[0x71];
    param_1[0x71] = iVar1;
    piVar2 = (int *)*piVar6;
    while (piVar2 != (int *)0x0) {
      *piVar6 = *piVar2;
      FUN_00173a54(piVar2[2],piVar2[1],0);
      FUN_00173a54(piVar2,1,0);
      piVar2 = (int *)*piVar6;
    }
  }
  FUN_00232920(param_1 + 0x6f);
  piVar6 = param_1 + 0x69;
  if (param_1[0x6d] != 0) {
    FUN_002382d8(piVar6);
    puVar3 = (undefined4 *)param_1[0x6d];
    *puVar3 = param_1[0x6a];
    param_1[0x6a] = puVar3;
    piVar2 = (int *)*piVar6;
    while (piVar2 != (int *)0x0) {
      *piVar6 = *piVar2;
      FUN_00173a54(piVar2[2],piVar2[1],0);
      FUN_00173a54(piVar2,1,0);
      piVar2 = (int *)*piVar6;
    }
    param_1[0x6a] = 0;
    param_1[0x6b] = 0;
    param_1[0x6c] = 0;
  }
  piVar6 = param_1 + 0x62;
  iVar1 = param_1[0x66];
  if (iVar1 != 0) {
    local_20 = *(int *)(iVar1 + 8);
    local_1c = iVar1;
    FUN_00220e94(auStack_18,piVar6,&local_20,&local_1c);
    iVar1 = param_1[0x66];
    *(undefined4 *)(iVar1 + 0xc) = param_1[99];
    param_1[99] = iVar1;
    piVar2 = (int *)*piVar6;
    while (piVar2 != (int *)0x0) {
      *piVar6 = *piVar2;
      FUN_00173a54(piVar2[2],piVar2[1],0);
      FUN_00173a54(piVar2,1,0);
      piVar2 = (int *)*piVar6;
    }
  }
  FUN_00232920(param_1 + 0x55);
  piVar2 = param_1 + 0x4d;
  piVar6 = (int *)param_1[0x51];
  if (piVar6 != (int *)0x0) {
    piVar5 = (int *)*piVar6;
    while (piVar4 = piVar5, piVar4 != piVar6) {
      piVar5 = (int *)param_1[0x51];
      if (piVar4 != (int *)param_1[0x51]) {
        piVar5 = (int *)*piVar4;
        *(int *)piVar4[1] = *piVar4;
        *(int *)(*piVar4 + 4) = piVar4[1];
        param_1[0x52] = param_1[0x52] + -1;
        *piVar4 = param_1[0x4e];
        param_1[0x4e] = piVar4;
      }
    }
    puVar3 = (undefined4 *)param_1[0x51];
    *puVar3 = param_1[0x4e];
    param_1[0x4e] = puVar3;
    piVar6 = (int *)*piVar2;
    while (piVar6 != (int *)0x0) {
      *piVar2 = *piVar6;
      FUN_00173a54(piVar6[2],piVar6[1],0);
      FUN_00173a54(piVar6,1,0);
      piVar6 = (int *)*piVar2;
    }
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[0x50] = 0;
  }
  FUN_00173a54(param_1[0x4a],param_1[0x4c] - param_1[0x4a],0);
  FUN_00232920(param_1 + 0x49);
  FUN_00232920(param_1 + 0x48);
  FUN_00232920(param_1 + 0x47);
  FUN_00232920(param_1 + 0x46);
  FUN_000710f8(param_1);
  return;
}

