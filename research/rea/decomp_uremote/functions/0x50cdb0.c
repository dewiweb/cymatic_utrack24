// rea decompile_all
// name: FUN_0050cdb0
// address: 0x50cdb0
// body: available
// range: 0x50cdb0-0x50d30f inclusive
// range: 0x50d315-0x50d418 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050cdb0(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int *in_ECX;
  bool bVar2;
  int local_1c;
  
  if ((uint)in_ECX[0x31] <= (uint)(param_3 - in_ECX[0x30])) {
    in_ECX[0x30] = param_3;
    FUN_00515830();
    FUN_005269a0(param_3);
    FUN_00515830();
    cVar1 = FUN_00526800(param_3);
    FUN_00515860();
    if (cVar1 == '\0') {
      FUN_00515830();
      cVar1 = FUN_0052c010(param_3);
      if (cVar1 != '\0') {
        in_ECX[0x31] = 5;
      }
      FUN_00515860();
      FUN_00515830();
      FUN_00522530(param_3);
      FUN_00515860();
      cVar1 = (**(code **)(*(int *)((int)in_ECX + *(int *)(in_ECX[3] + 4) + 0xc) + 0xe8))();
      if (cVar1 != '\0') {
        FUN_00520420(param_3);
      }
      FUN_00515830();
      cVar1 = (**(code **)(*(int *)((int)in_ECX + *(int *)(in_ECX[3] + 4) + 0xc) + 0xe8))();
      if ((cVar1 != '\0') && (700 < (uint)(param_3 - in_ECX[0x33]))) {
        in_ECX[0x33] = param_3;
        if ((short)in_ECX[0x38] == 0) {
          bVar2 = true;
        }
        else {
          bVar2 = *(int *)in_ECX[0x37] == 0;
        }
        if (!bVar2) {
          (**(code **)(*(int *)((int)in_ECX + *(int *)(in_ECX[3] + 4) + 0xc) + 0x144))
                    (0x2203,(short)in_ECX[0x39],0,0,0,0,&DAT_0095c854);
        }
        if ((char)in_ECX[0x4e] == '\0') {
          if (((in_ECX[0x4d] != 0) && (*(char *)((int)in_ECX + 0x139) != '\0')) &&
             (*(char *)((int)in_ECX + 0x139) = *(char *)((int)in_ECX + 0x139) + -1,
             *(char *)((int)in_ECX + 0x139) == '\0')) {
            FUN_0050b570(in_ECX[0x4d]);
          }
        }
        else if (in_ECX[0x4d] == 1) {
          (**(code **)(*(int *)((int)in_ECX + *(int *)(in_ECX[3] + 4) + 0xc) + 0x144))
                    (0x2051,0,0,0,0,0,&DAT_0095c854);
        }
        else if (in_ECX[0x4d] == 2) {
          (**(code **)(*(int *)((int)in_ECX + *(int *)(in_ECX[3] + 4) + 0xc) + 0x144))
                    (0x2053,0,0,0,0,0,&DAT_0095c854);
        }
      }
      FUN_00515860();
      FUN_00515830();
      FUN_005212e0(param_3);
      FUN_00515860();
      FUN_00515830();
      cVar1 = (**(code **)(*(int *)((int)in_ECX + *(int *)(in_ECX[3] + 4) + 0xc) + 0xe8))();
      if ((cVar1 != '\0') && (cVar1 = FUN_0052e7d0(param_3), cVar1 != '\0')) {
        if (in_ECX == (int *)0x0) {
          local_1c = 0;
        }
        else {
          local_1c = (int)in_ECX + *(int *)(in_ECX[3] + 4) + 0xc;
        }
        FUN_00537cd0(1,local_1c,4,&DAT_0095c854);
      }
      FUN_00515860();
      FUN_00515830();
      FUN_00526760(param_3);
      FUN_00515860();
      FUN_00515830();
      FUN_005239e0(param_3);
      FUN_00515860();
      if (in_ECX[0x3c] != 0) {
        FUN_00515830();
        (**(code **)(*(int *)in_ECX[0x3c] + 4))();
        FUN_00515860();
      }
      FUN_00515830();
      switch(in_ECX[0x46]) {
      case 0:
        if (2000 < (uint)(param_3 - in_ECX[0x32])) {
          in_ECX[0x32] = param_3;
          (**(code **)(*in_ECX + 0x18))();
          in_ECX[0x4c] = 4;
        }
        break;
      case 1:
        if (500 < (uint)(param_3 - in_ECX[0x4a])) {
          (**(code **)(*(int *)((int)in_ECX + *(int *)(in_ECX[3] + 4) + 0xc) + 0xe0))();
        }
        break;
      case 2:
      case 5:
        if (4000 < (uint)(param_3 - in_ECX[0x4a])) {
          (**(code **)(*(int *)((int)in_ECX + *(int *)(in_ECX[3] + 4) + 0xc) + 0xe4))();
          (**(code **)(*(int *)((int)in_ECX + *(int *)(in_ECX[3] + 4) + 0xc) + 0xe0))();
        }
        break;
      case 4:
        if (2000 < (uint)(param_3 - in_ECX[0x32])) {
          in_ECX[0x32] = param_3;
          FUN_00525680();
          FUN_0050b340();
        }
      }
      FUN_00515860();
    }
    else if (5 < (uint)in_ECX[0x31]) {
      in_ECX[0x31] = 5;
    }
  }
  FUN_00515830();
  FUN_0052c5d0(param_3);
  FUN_00515860();
  FUN_00515860();
  if (100 < (uint)in_ECX[0x31]) {
    in_ECX[0x31] = 100;
  }
  return;
}

