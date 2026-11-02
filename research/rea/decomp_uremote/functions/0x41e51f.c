// rea decompile_all
// name: FUN_0041e51f
// address: 0x41e51f
// body: available
// range: 0x41e51f-0x41e670 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0041e51f(code *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int in_EDX;
  int *piVar4;
  int *piVar5;
  undefined4 *unaff_ESI;
  uint uVar6;
  uint local_c;
  int *local_8;
  
  piVar1 = (int *)unaff_ESI[0xd];
  iVar3 = piVar1[in_EDX * 2 + 1];
  local_8 = (int *)unaff_ESI[10];
  if (((int)param_2 <= piVar1[1]) && (iVar3 <= (int)param_3)) {
    local_c = -unaff_ESI[1] & piVar1[1];
    if ((int)param_3 < (int)local_c) {
      local_c = param_3;
    }
    uVar6 = param_2;
    if (((int)param_2 <= iVar3) &&
       (param_2 = unaff_ESI[1] + -1 + iVar3 & -unaff_ESI[1], uVar6 = param_2,
       (ushort)((ushort)iVar3 & *(short *)(unaff_ESI + 1) - 1U) == 0)) {
      if (*(char *)((int)unaff_ESI + 0x57) != '\0') {
        local_8 = local_8 + -1;
        *(undefined1 *)((int)unaff_ESI + 0x57) = 0;
      }
      *local_8 = piVar1[in_EDX * 2];
      uVar6 = param_2 + unaff_ESI[1];
      local_8 = local_8 + 1;
    }
    if (*(char *)((int)unaff_ESI + 0x56) != '\0') {
      *(int *)(unaff_ESI[0x16] + 0x14) = (int)param_2 >> ((byte)*unaff_ESI & 0x1f);
      *(undefined1 *)((int)unaff_ESI + 0x56) = 0;
    }
    if ((int)uVar6 <= (int)local_c) {
      piVar4 = piVar1;
      if ((int *)unaff_ESI[9] <= local_8 + ((int)(local_c - uVar6) >> ((byte)*unaff_ESI & 0x1f)) + 1
         ) {
        unaff_ESI[10] = local_8;
        unaff_ESI[0xb] = 0x62;
        return CONCAT31((int3)((uint)local_8 >> 8),1);
      }
      do {
        if ((int)local_c < (int)uVar6) break;
        *(undefined1 *)((int)unaff_ESI + 0x57) = 0;
        uVar2 = piVar4[1];
        if ((int)uVar6 < (int)uVar2) {
          iVar3 = uVar2 - piVar4[in_EDX * 2 + 1];
          if (iVar3 < (int)unaff_ESI[4]) {
            piVar5 = piVar4 + in_EDX * -2;
            *local_8 = (int)((*piVar4 - piVar4[in_EDX * 2]) * (uVar6 - piVar4[in_EDX * 2 + 1])) /
                       iVar3 + piVar4[in_EDX * 2];
            uVar6 = uVar6 + unaff_ESI[1];
            local_8 = local_8 + 1;
          }
          else {
            (*param_1)(piVar4);
            piVar5 = piVar4 + in_EDX * 2;
          }
        }
        else {
          if (uVar2 == uVar6) {
            *(undefined1 *)((int)unaff_ESI + 0x57) = 1;
            *local_8 = *piVar4;
            uVar6 = uVar6 + unaff_ESI[1];
            local_8 = local_8 + 1;
          }
          piVar5 = piVar4 + in_EDX * -2;
        }
        piVar4 = piVar5;
      } while (piVar1 <= piVar5);
    }
  }
  unaff_ESI[0xd] = unaff_ESI[0xd] + in_EDX * -8;
  unaff_ESI[10] = local_8;
  return (uint)local_8 & 0xffffff00;
}

