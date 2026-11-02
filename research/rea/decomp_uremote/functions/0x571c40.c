// rea decompile_all
// name: FUN_00571c40
// address: 0x571c40
// body: available
// range: 0x571c40-0x572038 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00571c40(int param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int in_ECX;
  uint *puVar9;
  int local_8;
  
  local_8 = 0;
  FUN_0054f6b0();
  cVar5 = FUN_00558fe0();
  if (cVar5 == '\0') {
    local_8 = 0x1e;
  }
  else {
    if (*(char *)(in_ECX + -0x1d) != '\0') {
      local_8 = FUN_00571930(&DAT_0095c854);
    }
    if ((local_8 == 0) || (local_8 == 0xd)) {
      iVar6 = (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 0x24))();
      iVar7 = (**(code **)(*(int *)(iVar6 + 0x28 + *(int *)(*(int *)(iVar6 + 0x28) + 4)) + 0xc))();
      if ((iVar7 == 0x8204) ||
         (iVar7 = (**(code **)(*(int *)(iVar6 + 0x28 + *(int *)(*(int *)(iVar6 + 0x28) + 4)) + 0xc))
                            (), iVar7 == 0x8203)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((bVar3) && (*(char *)(in_ECX + -0x1c) != '\0')) {
        local_8 = 0x1e;
      }
      else {
        uVar8 = FUN_00521c70(in_ECX + -0x78,iVar6);
        if ((uVar8 & 0x80) == 0) {
          if (uVar8 == 1) {
            cVar5 = FUN_00529f40(in_ECX + -0x78,0);
            FUN_0052f300();
            *(undefined1 *)(in_ECX + -0x1d) = 1;
            if (cVar5 == '\0') {
              local_8 = 1;
            }
            if (((local_8 == 0) || (local_8 == 0xd)) &&
               ((local_8 = FUN_00571930(&DAT_0095c854), local_8 == 0 || (local_8 == 0xd)))) {
              uVar8 = FUN_00521c70(in_ECX + -0x78,iVar6);
              if ((uVar8 & 0x80) == 0) {
                local_8 = 0x1e;
              }
              else {
                iVar6 = *(int *)(in_ECX + -0xe4);
                uVar1 = *(uint *)(iVar6 + 0x580);
                *(uint *)(iVar6 + 0x580) = uVar1 + 1;
                *(uint *)(iVar6 + 0x584) = *(int *)(iVar6 + 0x584) + (uint)(0xfffffffe < uVar1);
                iVar6 = *(int *)(in_ECX + -0xe4);
                puVar9 = (uint *)(iVar6 + 0x588);
                uVar1 = *(uint *)(in_ECX + -0x70);
                uVar2 = *puVar9;
                *puVar9 = uVar1 + *puVar9;
                *(uint *)(iVar6 + 0x58c) = *(int *)(iVar6 + 0x58c) + (uint)CARRY4(uVar1,uVar2);
                if (uVar8 == 0x81) {
                  *(undefined1 *)(in_ECX + -0x1d) = 0;
                }
              }
            }
          }
          else {
            local_8 = 0x1e;
          }
        }
        else {
          iVar6 = *(int *)(in_ECX + -0xe4);
          uVar1 = *(uint *)(iVar6 + 0x580);
          *(uint *)(iVar6 + 0x580) = uVar1 + 1;
          *(uint *)(iVar6 + 0x584) = *(int *)(iVar6 + 0x584) + (uint)(0xfffffffe < uVar1);
          iVar6 = *(int *)(in_ECX + -0xe4);
          puVar9 = (uint *)(iVar6 + 0x588);
          uVar1 = *(uint *)(in_ECX + -0x70);
          uVar2 = *puVar9;
          *puVar9 = uVar1 + *puVar9;
          *(uint *)(iVar6 + 0x58c) = *(int *)(iVar6 + 0x58c) + (uint)CARRY4(uVar1,uVar2);
          if (uVar8 == 0x81) {
            *(undefined1 *)(in_ECX + -0x1d) = 0;
          }
        }
        if (local_8 == 0) {
          if (((param_2 != '\0') || ((*(ushort *)(in_ECX + -0x2c) & 0xff00) == 0x5b00)) || (bVar3))
          {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if (bVar4) {
            cVar5 = FUN_00529f40(in_ECX + -0x78,0);
            if (cVar5 == '\0') {
              local_8 = 1;
            }
            else if ((bVar3) && (iVar6 = FUN_00572040(), iVar6 == 3)) {
              *(undefined1 *)(in_ECX + -0x1c) = 2;
              *(char *)(in_ECX + -0x1b) =
                   *(char *)(in_ECX + -0x1b) + (char)*(undefined2 *)(in_ECX + -0x66);
            }
            FUN_0052f300();
            *(undefined1 *)(in_ECX + -0x1d) = 1;
          }
        }
      }
    }
  }
  FUN_0054f6f0();
  return local_8;
}

