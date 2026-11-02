// rea decompile_all
// name: FUN_00567ef0
// address: 0x567ef0
// body: available
// range: 0x567ef0-0x568467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00567ef0(int param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int in_ECX;
  uint *puVar10;
  undefined8 uVar11;
  int local_8;
  
  local_8 = 0;
  FUN_0054f6b0();
  if (((*(byte *)(in_ECX + 0xfe) >> 3 & 1) == 0) &&
     (*(int *)(*(int *)(*(int *)(in_ECX + 0x74) + 0x88) + 0x38) != 0)) {
    local_8 = 0x1f;
  }
  else {
    cVar5 = FUN_00558f90();
    if (cVar5 == '\0') {
      local_8 = 0x15;
    }
    else if (1 < *(ushort *)(in_ECX + 0x58)) {
      uVar6 = (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 0xc))();
      cVar5 = FUN_00595e80(uVar6);
      if (cVar5 == '\0') {
        local_8 = 0x24;
      }
    }
  }
  if (local_8 == 0) {
    cVar5 = FUN_00558fe0();
    if ((cVar5 == '\0') || (cVar5 = FUN_00558fe0(), cVar5 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      if ((*(byte *)(in_ECX + 0xfe) & 1) != 0) {
        local_8 = FUN_00566970();
      }
      if ((local_8 == 0) || (local_8 == 0xd)) {
        if (((*(byte *)(in_ECX + 0xfe) >> 1 & 1) != 0) &&
           ((*(short *)(in_ECX + 0xf8) == 0 && ((*(byte *)(in_ECX + 0xfe) >> 5 & 1) != 0)))) {
          uVar11 = FUN_0052cee0();
          FUN_0052f5c0(uVar11);
        }
        iVar7 = (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 0x24))();
        iVar8 = (**(code **)(*(int *)(iVar7 + 0x28 + *(int *)(*(int *)(iVar7 + 0x28) + 4)) + 0xc))()
        ;
        if ((iVar8 == 0x8204) ||
           (iVar8 = (**(code **)(*(int *)(iVar7 + 0x28 + *(int *)(*(int *)(iVar7 + 0x28) + 4)) + 0xc
                                ))(), iVar8 == 0x8203)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if ((bVar3) && (*(char *)(in_ECX + 0xfc) != '\0')) {
          local_8 = 0x1e;
        }
        else {
          uVar9 = FUN_00521c70(in_ECX + 0x90,iVar7);
          if ((uVar9 & 0x80) == 0) {
            if (uVar9 == 1) {
              cVar5 = FUN_00529f40(in_ECX + 0x90,0);
              FUN_0052f300();
              *(byte *)(in_ECX + 0xfe) = *(byte *)(in_ECX + 0xfe) | 1;
              if (cVar5 == '\0') {
                local_8 = 1;
              }
              if (((local_8 == 0) || (local_8 == 0xd)) &&
                 ((local_8 = FUN_00566970(), local_8 == 0 || (local_8 == 0xd)))) {
                uVar9 = FUN_00521c70(in_ECX + 0x90,iVar7);
                if ((uVar9 & 0x80) == 0) {
                  local_8 = 0x1e;
                }
                else {
                  iVar7 = *(int *)(in_ECX + 0x2c);
                  uVar1 = *(uint *)(iVar7 + 0x580);
                  *(uint *)(iVar7 + 0x580) = uVar1 + 1;
                  *(uint *)(iVar7 + 0x584) = *(int *)(iVar7 + 0x584) + (uint)(0xfffffffe < uVar1);
                  iVar7 = *(int *)(in_ECX + 0x2c);
                  puVar10 = (uint *)(iVar7 + 0x588);
                  uVar1 = *(uint *)(in_ECX + 0x98);
                  uVar2 = *puVar10;
                  *puVar10 = uVar1 + *puVar10;
                  *(uint *)(iVar7 + 0x58c) = *(int *)(iVar7 + 0x58c) + (uint)CARRY4(uVar1,uVar2);
                  if (uVar9 == 0x81) {
                    *(byte *)(in_ECX + 0xfe) = *(byte *)(in_ECX + 0xfe) & 0xfb;
                  }
                }
              }
            }
            else {
              local_8 = 0x1e;
            }
          }
          else {
            iVar7 = *(int *)(in_ECX + 0x2c);
            uVar1 = *(uint *)(iVar7 + 0x580);
            *(uint *)(iVar7 + 0x580) = uVar1 + 1;
            *(uint *)(iVar7 + 0x584) = *(int *)(iVar7 + 0x584) + (uint)(0xfffffffe < uVar1);
            iVar7 = *(int *)(in_ECX + 0x2c);
            puVar10 = (uint *)(iVar7 + 0x588);
            uVar1 = *(uint *)(in_ECX + 0x98);
            uVar2 = *puVar10;
            *puVar10 = uVar1 + *puVar10;
            *(uint *)(iVar7 + 0x58c) = *(int *)(iVar7 + 0x58c) + (uint)CARRY4(uVar1,uVar2);
            if (uVar9 == 0x81) {
              *(byte *)(in_ECX + 0xfe) = *(byte *)(in_ECX + 0xfe) & 0xfb;
            }
          }
          if (local_8 == 0) {
            if (((param_2 != '\0') || ((*(ushort *)(in_ECX + 0xdc) & 0xff00) == 0x5b00)) || (bVar3))
            {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if (bVar4) {
              cVar5 = FUN_00529f40(in_ECX + 0x90,0);
              if (cVar5 == '\0') {
                local_8 = 1;
              }
              else if ((bVar3) && (iVar7 = FUN_00568470(), iVar7 == 3)) {
                *(undefined1 *)(in_ECX + 0xfc) = 2;
                *(char *)(in_ECX + 0xfd) =
                     *(char *)(in_ECX + 0xfd) + (char)*(undefined2 *)(in_ECX + 0xa2);
              }
              FUN_0052f300();
              *(byte *)(in_ECX + 0xfe) = *(byte *)(in_ECX + 0xfe) | 1;
            }
          }
        }
      }
    }
    else {
      local_8 = 0x1e;
      *(byte *)(in_ECX + 0xfe) = *(byte *)(in_ECX + 0xfe) & 0xfb;
    }
  }
  FUN_0054f6f0();
  return local_8;
}

