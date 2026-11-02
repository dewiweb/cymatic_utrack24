// rea decompile_all
// name: FUN_004863c3
// address: 0x4863c3
// body: available
// range: 0x4863c3-0x4864bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004863c3(uint param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 *unaff_ESI;
  int local_8;
  
  local_8 = unaff_ESI[1];
  pbVar4 = (byte *)*unaff_ESI;
  piVar1 = (int *)unaff_ESI[4];
  if (piVar1[0x5f] == 0) {
    for (; param_2 < 0x19; param_2 = param_2 + 8) {
      if (local_8 == 0) {
        cVar2 = (**(code **)(piVar1[6] + 0xc))(piVar1);
        if (cVar2 == '\0') {
          return 0;
        }
        pbVar4 = *(byte **)piVar1[6];
        local_8 = ((undefined4 *)piVar1[6])[1];
      }
      uVar3 = (uint)*pbVar4;
      local_8 = local_8 + -1;
      pbVar4 = pbVar4 + 1;
      if (uVar3 == 0xff) {
        do {
          if (local_8 == 0) {
            cVar2 = (**(code **)(piVar1[6] + 0xc))(piVar1);
            if (cVar2 == '\0') {
              return 0;
            }
            pbVar4 = *(byte **)piVar1[6];
            local_8 = ((undefined4 *)piVar1[6])[1];
          }
          uVar3 = (uint)*pbVar4;
          local_8 = local_8 + -1;
          pbVar4 = pbVar4 + 1;
        } while (uVar3 == 0xff);
        if (uVar3 != 0) {
          piVar1[0x5f] = uVar3;
          goto LAB_00486464;
        }
        uVar3 = 0xff;
      }
      param_1 = param_1 << 8 | uVar3;
    }
  }
  else {
LAB_00486464:
    if (param_2 < param_3) {
      if (*(char *)(piVar1[0x66] + 8) == '\0') {
        *(undefined4 *)(*piVar1 + 0x14) = 0x75;
        (**(code **)(*piVar1 + 4))(piVar1,0xffffffff);
        *(undefined1 *)(piVar1[0x66] + 8) = 1;
      }
      cVar2 = (char)param_2;
      param_2 = 0x19;
      param_1 = param_1 << (0x19U - cVar2 & 0x1f);
    }
  }
  unaff_ESI[1] = local_8;
  unaff_ESI[2] = param_1;
  unaff_ESI[3] = param_2;
  *unaff_ESI = pbVar4;
  return 1;
}

