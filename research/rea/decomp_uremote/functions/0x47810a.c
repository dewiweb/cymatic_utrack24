// rea decompile_all
// name: FUN_0047810a
// address: 0x47810a
// body: available
// range: 0x47810a-0x4783a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_0047810a(int param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *_Src;
  int *piVar6;
  int local_4c;
  int local_44;
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  size_t local_14;
  int local_10;
  
  uVar2 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  piVar6 = (int *)(*in_ECX + in_ECX[6] * param_1 * 4);
  local_28 = *piVar6;
  if (local_28 != 0) {
    local_1c = *param_2;
    if (local_1c == 0) {
      *piVar6 = 0;
    }
    else {
      iVar3 = (in_ECX[3] + in_ECX[1]) * 0x100;
      if ((local_1c == 2) && (0xfe < param_2[2])) {
        FUN_00440367(iVar3);
        FUN_004783a2();
      }
      else {
        local_34 = 0;
        local_10 = 0;
        local_4c = 0;
        local_38 = 0;
        local_18 = 0;
        local_30 = piVar6[1];
        local_40 = param_2[1];
        param_2 = param_2 + 2;
        _Src = piVar6 + 2;
        bVar1 = false;
        local_44 = -0x80000000;
        if (0 < local_28) {
          local_14 = local_28 << 3;
          local_24 = param_2;
          do {
            if (local_1c < 1) break;
            if (local_40 < local_30) {
              local_38 = *param_2;
              piVar5 = param_2 + 1;
              param_2 = param_2 + 2;
              local_1c = local_1c + -1;
              iVar4 = *piVar5;
              local_24 = param_2;
              local_20 = local_40;
            }
            else {
              if (local_30 == local_40) {
                local_38 = *param_2;
                local_40 = param_2[1];
                param_2 = param_2 + 2;
                local_1c = local_1c + -1;
                local_24 = param_2;
              }
              local_20 = local_30;
              local_4c = *_Src;
              local_30 = _Src[1];
              _Src = _Src + 2;
              local_28 = local_28 + -1;
              local_14 = local_14 - 8;
              iVar4 = local_40;
            }
            local_40 = iVar4;
            if (local_44 < local_20) {
              if (iVar3 <= local_20) break;
              local_44 = local_20;
              iVar4 = (local_38 + 1) * local_4c >> 8;
              if (iVar4 != local_18) {
                piVar5 = _Src;
                if (in_ECX[5] <= local_10) {
                  *piVar6 = local_10;
                  if (bVar1) {
                    _memcpy(&stack0xffffffa4,_Src,local_14);
                    FUN_00439b5a(0x100);
                    FUN_00477f54();
                    piVar6 = (int *)(*in_ECX + in_ECX[6] * param_1 * 4);
                    piVar5 = (int *)(*in_ECX + in_ECX[4] * in_ECX[6] * 4);
                    _memcpy(piVar5,&stack0xffffffa4,local_14);
                    param_2 = local_24;
                  }
                  else {
                    FUN_00439b5a(0x100);
                    FUN_00477f54();
                    piVar6 = (int *)(*in_ECX + in_ECX[6] * param_1 * 4);
                    param_2 = local_24;
                  }
                }
                local_10 = local_10 + 1;
                _Src = piVar5;
                if (!bVar1) {
                  _Src = (int *)(*in_ECX + in_ECX[4] * in_ECX[6] * 4);
                  bVar1 = true;
                  _memcpy(_Src,piVar5,local_14);
                  param_2 = local_24;
                }
                piVar6[local_34 + 1] = local_20;
                local_34 = local_34 + 2;
                piVar6[local_34] = iVar4;
                local_18 = iVar4;
              }
            }
          } while (0 < local_28);
          if (0 < local_18) {
            if (in_ECX[5] <= local_10) {
              *piVar6 = local_10;
              FUN_00439b5a(0x100);
              FUN_00477f54();
              piVar6 = (int *)(*in_ECX + in_ECX[6] * param_1 * 4);
            }
            local_10 = local_10 + 1;
            piVar6[local_34 + 1] = iVar3;
            (piVar6 + local_34 + 1)[1] = 0;
          }
        }
        *piVar6 = local_10;
      }
    }
  }
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}

