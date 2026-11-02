// rea decompile_all
// name: FUN_00601f10
// address: 0x601f10
// body: available
// range: 0x601f10-0x6020f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00601f10(int param_1,int param_2,int param_3)

{
  float fVar1;
  char cVar2;
  int *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  double dVar9;
  undefined1 auStack_443c [4];
  int local_4438;
  int local_4434;
  int local_4430;
  int local_442c;
  int local_4428;
  int local_4424;
  int local_4420;
  int *local_441c;
  double local_4418;
  int local_4410 [256];
  undefined1 local_4010 [16380];
  uint uStack_14;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)auStack_443c;
  local_4430 = param_1;
  if (0 < param_3) {
    if ((char)in_ECX[6] != '\0') {
      (**(code **)(*in_ECX + 4))(param_1,param_3);
      __security_check_cookie(uStack_14 ^ (uint)&stack0xffffbbbc);
      return;
    }
    iVar3 = 0;
    local_4434 = (int)(0x1000 / (longlong)param_2);
    if (0 < param_2) {
      puVar5 = local_4010;
      do {
        local_4410[iVar3] = (int)puVar5;
        iVar3 = iVar3 + 1;
        puVar5 = puVar5 + local_4434 * 4;
      } while (iVar3 < param_2);
    }
    local_4410[param_2] = 0;
    local_4438 = 0;
    local_441c = in_ECX;
    do {
      iVar3 = param_3;
      if (local_4434 < param_3) {
        iVar3 = local_4434;
      }
      iVar8 = 0;
      if (0 < param_2) {
        local_4428 = local_4438 * 4;
        local_4424 = iVar3 + -1;
        local_442c = local_4430 - (int)local_4410;
        do {
          pfVar7 = (float *)(*(int *)((int)local_4410 + local_442c + iVar8 * 4) + local_4428);
          puVar4 = (undefined4 *)local_4410[iVar8];
          for (iVar6 = local_4424; -1 < iVar6; iVar6 = iVar6 + -1) {
            fVar1 = *pfVar7;
            pfVar7 = pfVar7 + 1;
            dVar9 = (double)fVar1;
            if (-1.0 < dVar9) {
              if (dVar9 < 1.0) {
                local_4418 = dVar9 * 2147483647.0 + 6755399441055744.0;
                *puVar4 = local_4418._0_4_;
              }
              else {
                *puVar4 = 0x7fffffff;
              }
            }
            else {
              *puVar4 = 0x80000000;
            }
            puVar4 = puVar4 + 1;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < param_2);
      }
      local_4420 = iVar3;
      cVar2 = (**(code **)(*local_441c + 4))(local_4410,iVar3);
      if (cVar2 == '\0') {
        __security_check_cookie(local_c ^ (uint)auStack_443c);
        return;
      }
      param_3 = param_3 - iVar3;
      local_4438 = local_4438 + iVar3;
    } while (0 < param_3);
  }
  __security_check_cookie(local_c ^ (uint)auStack_443c);
  return;
}

